webpack = require('webpack')
config.plugins.push(new webpack.DefinePlugin({
    BACKEND_HOST: '"127.0.0.1"',
    BACKEND_PORT: 443
}));
