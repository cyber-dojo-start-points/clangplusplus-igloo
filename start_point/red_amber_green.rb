
lambda { |stdout,stderr,status|
  output = stdout + stderr
  igloo_pattern =  /Test run complete. (\d+) tests run, (\d+) succeeded, (\d+) failed./
  if match = igloo_pattern.match(output)
    return :red if match[3] != '0'
    # A suite holding no Context runs nothing and igloo still calls that a
    # complete run with nothing failed. The count of tests run is what keeps
    # it out of green: nothing ran, so nothing was proved either way.
    return :amber if match[1] == '0'
    return :green
  end
  :amber
}
