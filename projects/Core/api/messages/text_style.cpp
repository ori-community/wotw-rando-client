#include "text_style.h"

#include <Modloader/app/types/TextStyle.h>
#include <Modloader/app/types/TextStyleCollection.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextStyleCollection.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

#include <Common/ext.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonIconRenderer.h>
#include <unordered_set>
#include <vector>

using namespace app::classes;
using namespace modloader;

namespace text_style {
    // IL2CPP_INTERCEPT(void, CatlikeCoding::TextBox::TextBox, GenerateMetaData, app::TextBox * this_ptr) {
    //     next::CatlikeCoding::TextBox::TextBox::GenerateMetaData(this_ptr);
    //     this_ptr->fields.currentStyle.lineHeight = 0.0f;
    //     this_ptr->fields.currentStyle.lineDescent.baseline = 0.f;
    //     this_ptr->fields.currentStyle.lineDescent.baselineToBottom = 0.f;
    // }

    bool eat(std::string_view text, int& i, std::string_view food) {
        if (i + food.size() >= text.size()) {
            return false;
        }

        if (text.substr(i, food.size()) == food) {
            i += static_cast<int>(food.size());
            return true;
        }

        return false;
    }

    std::string_view eat_until(std::string_view text, int& i, std::string_view until) {
        int j = i;
        while (j < text.size()) {
            if (eat(text, j, until)) {
                std::string_view out(text.data() + i, j - i - until.size());
                i = j;
                return out;
            } else {
                ++j;
            }
        }

        return "";
    }

    bool check_style(std::string_view text, int& i, std::string_view start, std::string& value) {
        if (eat(text, i, start)) {
            value = eat_until(text, i, ">");
            trim(value);
            if (!value.empty()) {
                return true;
            } else {
                warn("messages", "missing > in style definition");
            }
        }

        return false;
    }

    app::TextStyle* create_style(std::string_view name) {
        const auto style = types::TextStyle::create();
        style->fields.name = il2cpp::string_new(name);
        style->fields.rendererId = -1;
        return style;
    }

    std::unordered_set<std::string> created_styles;

    app::TextStyle* create_color_style(std::unordered_set<std::string>& styles, std::string_view text) {
        auto hex_style = std::format("hex_{}", text);
        auto it = styles.find(hex_style);
        if (it != styles.end() || text.size() != 8) {
            return nullptr;
        }

        char* out = nullptr;
        auto color_channels = std::strtoul(text.data(), &out, 16);
        if (out != text.data() + text.size()) {
            return nullptr;
        }

        auto style = create_style(hex_style);
        style->fields.hasColor = true;
        style->fields.color.rgba = static_cast<int>(
            ((color_channels >> 24u) & 0xffu) |
            ((color_channels << 8u) & 0xff0000u) |
            ((color_channels >> 8u) & 0xff00u) |
            ((color_channels << 24u) & 0xff000000u)
        );

        return style;
    }

    app::TextStyle* create_size_style(std::unordered_set<std::string>& styles, std::string_view text) {
        auto size_style = std::format("s_{}", text);
        auto it = styles.find(size_style);
        if (it != styles.end()) {
            return nullptr;
        }

        char* out = nullptr;
        auto font_scale = std::strtod(text.data(), &out);
        if (out != text.data() + text.size()) {
            return nullptr;
        }

        auto style = create_style(size_style);
        style->fields.hasFontScale = true;
        style->fields.fontScale = static_cast<float>(font_scale);
        style->fields.absoluteFontScale = true;

        return style;
    }

    app::TextStyle* create_line_size_style(std::unordered_set<std::string>& styles, std::string_view text) {
        auto line_size_style = std::format("ls_{}", text);
        auto it = styles.find(line_size_style);
        if (it != styles.end()) {
            return nullptr;
        }

        char* out = nullptr;
        auto line_scale = std::strtof(text.data(), &out);
        if (out != text.data() + text.size()) {
            return nullptr;
        }

        auto style = create_style(line_size_style);
        style->fields.hasLineScale = true;
        style->fields.lineScale = line_scale;

        return style;
    }

    void create_styles(app::TextBox* box, std::string_view text) {
        std::unordered_set<std::string> existing_style_names;

        auto style_array = box->fields.styleCollection->fields.styles;
        for (const auto& style: il2cpp::ArrayIterator(style_array)) {
            auto name = il2cpp::convert_csstring(style->fields.name);
            existing_style_names.emplace(name);
        }

        std::vector<app::TextStyle*> new_styles;
        std::string value;
        for (int i = 0; i < text.size();) {
            app::TextStyle* style = nullptr;
            if (check_style(text, i, "<hex_", value)) {
                style = create_color_style(existing_style_names, value);
            } else if (check_style(text, i, "<s_", value)) {
                style = create_size_style(existing_style_names, value);
            } else if (check_style(text, i, "<ls_", value)) {
                style = create_line_size_style(existing_style_names, value);
            } else {
                ++i;
            }

            if (style != nullptr) {
                new_styles.push_back(style);
            }
        }

        if (!new_styles.empty()) {
            const auto new_styles_array_count = style_array->max_length + new_styles.size();
            const auto new_styles_array = types::TextStyle::create_array(static_cast<int>(new_styles_array_count));

            for (int i = 0; i < style_array->max_length; ++i) {
                new_styles_array->vector[i] = style_array->vector[i];
            }

            for (int i = 0; i < new_styles.size(); ++i) {
                new_styles_array->vector[i + style_array->max_length] = new_styles.at(i);
            }

            box->fields.styleCollection->fields.styles = new_styles_array;
        }
    }
} // namespace text_style
