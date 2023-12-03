#include <utils/color.h>

namespace utils {
    app::Color hex_string_to_color(std::string_view str, bool flip) {
        if (str.starts_with("0x"))
            str.remove_prefix(2);
        if (str.starts_with("#"))
            str.remove_prefix(1);

        char* out = nullptr;
        const auto color_channels = std::strtoul(str.data(), &out, 16);
        if (flip) {
            return app::Color{
                ((color_channels >> 24) & 0xff) / 256.0f,
                ((color_channels >> 16) & 0xff) / 256.0f,
                ((color_channels >> 8) & 0xff) / 256.0f,
                (color_channels & 0xff) / 256.0f
            };
        } else {
            return app::Color{
                (color_channels & 0xff) / 256.0f,
                ((color_channels >> 8) & 0xff) / 256.0f,
                ((color_channels >> 16) & 0xff) / 256.0f,
                ((color_channels >> 24) & 0xff) / 256.0f
            };
        }
    }
} // namespace utils
