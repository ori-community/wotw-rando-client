#include <Core/utils/color.h>

namespace utils {
    app::Color hex_string_to_color(std::string_view str, bool flip) {
        if (str.starts_with("0x")) {
            str.remove_prefix(2);
        }

        if (str.starts_with("#")) {
            str.remove_prefix(1);
        }

        const bool no_alpha = str.size() <= 6;
        char* out = nullptr;
        const auto color_channels = std::strtoul(str.data(), &out, 16);
        if (no_alpha && flip) {
            return app::Color{
                static_cast<float>((color_channels >> 16) & 0xff) / 256.0f,
                static_cast<float>((color_channels >> 8) & 0xff) / 256.0f,
                static_cast<float>(color_channels & 0xff) / 256.0f,
                1.0f
            };
        }

        if (no_alpha) {
            return app::Color{
                static_cast<float>(color_channels & 0xff) / 256.0f,
                static_cast<float>((color_channels >> 8) & 0xff) / 256.0f,
                static_cast<float>((color_channels >> 16) & 0xff) / 256.0f,
                1.0f
            };
        }

        if (flip) {
            return app::Color{
                static_cast<float>((color_channels >> 24) & 0xff) / 256.0f,
                static_cast<float>((color_channels >> 16) & 0xff) / 256.0f,
                static_cast<float>((color_channels >> 8) & 0xff) / 256.0f,
                static_cast<float>(color_channels & 0xff) / 256.0f
            };
        }

        return app::Color{
            static_cast<float>(color_channels & 0xff) / 256.0f,
            static_cast<float>((color_channels >> 8) & 0xff) / 256.0f,
            static_cast<float>((color_channels >> 16) & 0xff) / 256.0f,
            static_cast<float>((color_channels >> 24) & 0xff) / 256.0f
        };
    }
} // namespace utils
