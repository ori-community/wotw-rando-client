#include "text_style.h"

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <constants.h>
#include <game/player.h>
#include <macros.h>

#include <Common/ext.h>
#include <unordered_set>
#include <vector>

using namespace modloader;

namespace text_style {
    bool eat(std::wstring const& text, int& i, std::wstring_view food) {
        if (i + food.size() >= text.size())
            return false;

        if (std::wstring_view(text.c_str() + i, food.size()) == food) {
            i += food.size();
            return true;
        }

        return false;
    }

    std::wstring_view eat_until(std::wstring const& text, int& i, std::wstring_view until) {
        int j = i;
        while (j < text.size()) {
            if (eat(text, j, until)) {
                std::wstring_view out(text.c_str() + i, j - i - until.size());
                i = j;
                return out;
            } else
                ++j;
        }

        return L"";
    }

    bool check_style(std::wstring const& text, int& i, std::wstring_view start, std::string& value) {
        if (eat(text, i, start)) {
            value = convert_wstring_to_string(std::wstring(eat_until(text, i, L">")));
            trim(value);
            if (!value.empty())
                return true;
            else
                warn("messages", "missing > in style definition");
        }

        return false;
    }

    app::TextStyle* create_style(std::string_view name) {
        auto style = il2cpp::create_object<app::TextStyle>("CatlikeCoding.TextBox", "TextStyle");
        il2cpp::invoke(style, ".ctor");
        style->fields.name = reinterpret_cast<app::String*>(il2cpp::string_new(name));
        style->fields.rendererId = -1;
        return style;
    }

    std::unordered_set<std::string> created_styles;
    app::TextStyle* create_color_style(std::string const& text) {
        auto it = created_styles.find(text);
        if (it != created_styles.end() || text.size() != 8)
            return nullptr;

        char* out = nullptr;
        auto color_channels = std::strtoul(text.c_str(), &out, 16);
        if (out != text.c_str() + text.size())
            return nullptr;

        auto style = create_style("hex_" + text);
        style->fields.hasColor = true;
        style->fields.color.rgba =
                ((color_channels >> 24) & 0xff) |
                ((color_channels << 8) & 0xff0000) |
                ((color_channels >> 8) & 0xff00) |
                ((color_channels << 24) & 0xff000000);

        return style;
    }

    app::TextStyle* create_size_style(std::string const& text) {
        auto it = created_styles.find(text);
        if (it != created_styles.end())
            return nullptr;

        char* out = nullptr;
        auto font_scale = std::strtod(text.c_str(), &out);
        if (out != text.c_str() + text.size())
            return nullptr;

        auto style = create_style("s_" + text);
        style->fields.hasFontScale = true;
        style->fields.fontScale = font_scale;
        style->fields.absoluteFontScale = true;

        return style;
    }

    void create_styles(app::TextBox* box, std::wstring const& text) {
        int i = 0;
        std::vector<app::TextStyle*> new_styles;
        std::string value;
        while (i < text.size()) {
            app::TextStyle* style = nullptr;
            if (check_style(text, i, L"<hex_", value))
                style = create_color_style(value);
            else if (check_style(text, i, L"<s_", value))
                style = create_size_style(value);
            else
                ++i;

            if (style != nullptr) {
                created_styles.emplace(value);
                new_styles.push_back(style);
            }
        }

        if (!new_styles.empty()) {
            auto* styles = box->fields.styleCollection->fields.styles;
            auto size = styles->max_length + new_styles.size();
            auto arr = il2cpp::untyped::array_new(il2cpp::get_class("CatlikeCoding.TextBox", "TextStyle"), size);
            for (int i = 0; i < styles->max_length; ++i)
                arr->vector[i] = styles->vector[i];

            for (int i = 0; i < new_styles.size(); ++i)
                arr->vector[i + styles->max_length] = new_styles.at(i);

            box->fields.styleCollection->fields.styles = reinterpret_cast<app::TextStyle__Array*>(arr);
            for (auto i = 0; i < box->fields.styleCollection->fields.styles->max_length; ++i)
                auto name = il2cpp::convert_csstring(box->fields.styleCollection->fields.styles->vector[i]->fields.name);
        }
    }
}