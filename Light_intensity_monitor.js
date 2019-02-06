setChartLibrary('google-chart');
setChartTitle('Light Intensity Monitor');
setChartType('scatterGraph');
setChartType('areaGraph');
setAxisName('Time','light-intensity');
setCrosshair(true);
plotChart('time_stamp','light_pin');
