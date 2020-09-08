webpack = require('webpack')
config.plugins.push(new webpack.DefinePlugin({
    BACKEND_HOST: '"localhost"',
    BACKEND_PORT: 80
}));
