webpack = require('webpack')
config.plugins.push(new webpack.DefinePlugin({
    BACKEND_HOST: '"wotw.orirando.com"',
    BACKEND_PORT: 443
}));
