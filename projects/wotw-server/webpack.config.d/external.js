config.externals = [
    'text-encoding',
    'utf-8-validate',
    'abort-controller',
    'bufferutil',
    'fs',
    'node-fetch'
]
config.devServer = config.devServer || {}
config.devServer.historyApiFallback = true
