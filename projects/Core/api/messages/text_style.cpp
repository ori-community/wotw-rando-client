#include "text_style.h"

#include <Modloader/app/types/TextStyle.h>
#include <Modloader/app/types/TextStyleCollection.h>
#include <Modloader/app/types/AppliedTextStyle.h>
#include <Modloader/app/types/CharMetaData.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextStyleCollection.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextStyle.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/BitmapFont.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/BitmapFontChar.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/CharMetaData.h>
#include <Modloader/app/methods/UnityEngine/Color.h>
#include <Modloader/app/methods/UnityEngine/Color32.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/AppliedTextStyle.h>
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
    IL2CPP_INTERCEPT(void, CatlikeCoding::TextBox::TextBox, GenerateMetaData, app::TextBox* this_ptr) {
        // This is a reimplementation of CatlikeCoding::TextBox::TextBox::GenerateMetaData.
        // By default, when changing styles, the vanilla game will still apply the previous or upcoming
        // style, even though no visible characters have been rendered yet or will be rendered after the
        // change. This is mostly notable with line scales.
        //
        // Example of the broken vanilla behavior: "<ls_0.3>Hallo</>"
        // This would result in three styles being applied.
        // First the default style is applied, making it impossible for the line height to shrink below the
        // line height of the initial style. Then our text is rendered with the line scale of 0.3, then after
        // closing the tag, the previous style is applied again, although no visible characters follow.
        //
        // This reimplementation fixes this behavior by delaying style changes until the next visible
        // character (including whitespaces) is rendered.
        // Some variables have been renamed from their vanilla names to make (more) sense.

        this_ptr->fields.lastCharIndex = this_ptr->fields.textLength - 1;

        il2cpp::invoke(this_ptr->fields.lines, "Clear");
        il2cpp::invoke(this_ptr->fields.styleStack, "Clear");

        CatlikeCoding::TextBox::AppliedTextStyle::Apply(
            il2cpp::box_ref<app::AppliedTextStyle__Boxed>(this_ptr->fields.currentStyle),
            this_ptr->fields.styleCollection->fields.styles->vector[0],
            this_ptr->fields.textRenderers->vector[0]
        );

        this_ptr->fields.currentStyle.size *= this_ptr->fields.size;
        this_ptr->fields.currentStyle.color = UnityEngine::Color32::op_Implicit_1(
            UnityEngine::Color::op_Multiply_1(
                UnityEngine::Color32::op_Implicit_2(this_ptr->fields.currentStyle.color),
                this_ptr->fields.color
            )
        );
        this_ptr->fields.currentStyle.lineHeight *= this_ptr->fields.size;
        this_ptr->fields.currentStyle.lineDescent.baseline *= this_ptr->fields.size;
        this_ptr->fields.currentStyle.lineDescent.baselineToBottom *= this_ptr->fields.size;

        int input_character_index = 0;
        int rendered_characters = -1;

        app::Vector2 cursor{0.f, 0.f};

        while (input_character_index < this_ptr->fields.firstCharIndex) {
            if (this_ptr->fields.charMetaData->vector[input_character_index].id == '<') {
                input_character_index = CatlikeCoding::TextBox::TextBox::ParseStyleStatementAt(this_ptr, input_character_index, rendered_characters, cursor);
            }
            ++input_character_index;
        }

        const float min_y_coordinate_before_overflow = this_ptr->fields.paddingBottom - this_ptr->fields.maxHeight;
        app::BitmapFontChar* bitmap_font_char = nullptr;
        this_ptr->fields.overflowed = false;

        app::LineDescent line_descent_of_current_word = this_ptr->fields.currentStyle.lineDescent;
        app::LineDescent line_descent_of_current_line = this_ptr->fields.currentStyle.lineDescent;
        std::optional<app::LineDescent> line_descent_to_use_from_next_visible_character_onwards = std::nullopt;

        app::TextBoxLine current_line{};

        const auto switch_to_queued_line_descent = [&]() {
            if (!line_descent_to_use_from_next_visible_character_onwards.has_value()) {
                return;
            }

            auto line_descent_of_new_style = *line_descent_to_use_from_next_visible_character_onwards;
            il2cpp::invoke(this_ptr->fields.wordCache, "Add", &line_descent_of_new_style);

            auto line_has_any_visible_character = false;
            for (int i = current_line.firstCharIndex; i < input_character_index; ++i) {
                if (this_ptr->fields.charMetaData->vector[i].type != app::CharType__Enum::Style) {
                    line_has_any_visible_character = true;
                    break;
                }
            }

            if (!line_has_any_visible_character || line_descent_of_current_line.baseline > line_descent_of_new_style.baseline) {
                CatlikeCoding::TextBox::TextBox::AdjustBaseline(this_ptr, input_character_index, line_descent_of_new_style.baseline - line_descent_of_current_line.baseline, &cursor, &current_line);
                line_descent_of_current_line.baseline = line_descent_of_new_style.baseline;
            }

            if (!line_has_any_visible_character || line_descent_of_current_line.baselineToBottom > line_descent_of_new_style.baselineToBottom) {
                line_descent_of_current_line.baselineToBottom = line_descent_of_new_style.baselineToBottom;
            }

            current_line.bottom = current_line.top + line_descent_of_current_line.baseline + line_descent_of_current_line.baselineToBottom;
        };

        current_line.firstCharIndex = input_character_index;
        current_line.lastCharIndex = input_character_index;
        cursor.y = line_descent_of_current_line.baseline - this_ptr->fields.paddingTop;
        current_line.baseline = cursor.y;
        current_line.top = -this_ptr->fields.paddingTop;
        current_line.bottom = current_line.top + line_descent_of_current_line.baseline + line_descent_of_current_line.baselineToBottom;
        cursor.x = CatlikeCoding::TextBox::TextBox::GetLeftContour(this_ptr, current_line.baseline);
        current_line.horizontalStart = cursor.x;
        current_line.horizontalEnd = this_ptr->fields.width + CatlikeCoding::TextBox::TextBox::GetRightContour(this_ptr, current_line.baseline);

        while (input_character_index <= this_ptr->fields.lastCharIndex) {
            const wchar_t id = this_ptr->fields.charMetaData->vector[input_character_index].id;

            if (id <= ' ') {
                CatlikeCoding::TextBox::CharMetaData::MarkAsWhitespace(
                    il2cpp::box_ref<app::CharMetaData__Boxed>(this_ptr->fields.charMetaData->vector[input_character_index]),
                    ++rendered_characters,
                    cursor,
                    &this_ptr->fields.currentStyle
                );

                if (bitmap_font_char != nullptr) {
                    line_descent_of_current_word = line_descent_of_current_line;
                }

                bitmap_font_char = nullptr;

                switch (id) {
                    case ' ': {
                        switch_to_queued_line_descent();
                        cursor.x += this_ptr->fields.currentStyle.size * this_ptr->fields.currentStyle.font->fields.spaceAdvance;
                    } break;
                    case '\n': {
                        current_line.lastCharIndex = input_character_index;
                        il2cpp::invoke(this_ptr->fields.lines, "Add", &current_line);

                        line_descent_of_current_line = this_ptr->fields.currentStyle.lineDescent;
                        current_line.firstCharIndex = input_character_index + 1;
                        current_line.top = current_line.bottom;
                        current_line.bottom = current_line.top + line_descent_of_current_line.baseline + line_descent_of_current_line.baselineToBottom;

                        if (current_line.bottom < min_y_coordinate_before_overflow) {
                            CatlikeCoding::TextBox::TextBox::OverFlow(this_ptr, input_character_index);
                            goto after_while_loop;
                        }

                        current_line.baseline = current_line.top + line_descent_of_current_line.baseline;
                        cursor.y = current_line.baseline;
                        current_line.horizontalStart = CatlikeCoding::TextBox::TextBox::GetLeftContour(this_ptr, cursor.y);
                        cursor.x = current_line.horizontalStart;
                        current_line.horizontalEnd = this_ptr->fields.width + CatlikeCoding::TextBox::TextBox::GetRightContour(this_ptr, cursor.y);
                    } break;
                    case '\t': {
                        switch_to_queued_line_descent();
                        cursor.x = (1.f + static_cast<float>(static_cast<int>(cursor.x / this_ptr->fields.tabSize))) * this_ptr->fields.tabSize;
                    } break;
                    default:
                }

            } else if (id == '<') {
                input_character_index = CatlikeCoding::TextBox::TextBox::ParseStyleStatementAt(this_ptr, input_character_index, rendered_characters, cursor);
                line_descent_to_use_from_next_visible_character_onwards = this_ptr->fields.currentStyle.lineDescent;

            } else {
                switch_to_queued_line_descent();

                if (bitmap_font_char == nullptr) {
                    il2cpp::invoke(this_ptr->fields.wordCache, "Clear");
                    il2cpp::invoke(this_ptr->fields.wordCache, "Add", &this_ptr->fields.currentStyle.lineDescent);
                } else {
                    cursor.x += this_ptr->fields.currentStyle.size * (this_ptr->fields.currentStyle.letterSpacing + CatlikeCoding::TextBox::BitmapFontChar::GetKerning(bitmap_font_char, id));
                }

                bitmap_font_char = CatlikeCoding::TextBox::CharMetaData::MarkAsVisible(
                    il2cpp::box_ref<app::CharMetaData__Boxed>(this_ptr->fields.charMetaData->vector[input_character_index]),
                    ++rendered_characters,
                    cursor,
                    &this_ptr->fields.currentStyle
                );

                if (bitmap_font_char->fields.height == 0.f) {
                    const auto unknown_character = CatlikeCoding::TextBox::BitmapFont::get_Item(this_ptr->fields.currentStyle.font, L'□');
                    bitmap_font_char->fields.width = unknown_character->fields.width;
                    bitmap_font_char->fields.advance = unknown_character->fields.advance;
                    bitmap_font_char->fields.xOffset = unknown_character->fields.xOffset;
                }

                cursor.x += bitmap_font_char->fields.advance * this_ptr->fields.currentStyle.size;

                if (cursor.x > current_line.horizontalEnd || current_line.bottom < min_y_coordinate_before_overflow) {
                    auto j = CatlikeCoding::TextBox::TextBox::FindWrapStart(this_ptr, input_character_index, current_line.firstCharIndex);

                    if (j >= 0) {
                        if (line_descent_of_current_word.baseline != line_descent_of_current_line.baseline) {
                            CatlikeCoding::TextBox::TextBox::AdjustBaseline(this_ptr, input_character_index + 1, line_descent_of_current_word.baseline - line_descent_of_current_line.baseline, &cursor, &current_line);
                            line_descent_of_current_line.baseline = line_descent_of_current_word.baseline;
                        }

                        line_descent_of_current_line.baselineToBottom = line_descent_of_current_word.baselineToBottom;
                        current_line.lastCharIndex = j - 1;
                        current_line.bottom = current_line.top + line_descent_of_current_line.baseline + line_descent_of_current_line.baselineToBottom;
                        il2cpp::invoke(this_ptr->fields.lines, "Add", &current_line);

                        current_line.firstCharIndex = j;
                        current_line.top = current_line.bottom;
                        line_descent_of_current_line = CatlikeCoding::TextBox::TextBox::FindLineDataForLastWord(this_ptr);
                        current_line.baseline = current_line.top + line_descent_of_current_line.baseline;
                        current_line.bottom = current_line.baseline + line_descent_of_current_line.baselineToBottom;

                        if (current_line.bottom < min_y_coordinate_before_overflow) {
                            line_descent_of_current_line.baselineToBottom = line_descent_of_current_word.baselineToBottom;
                            CatlikeCoding::TextBox::TextBox::EraseVisibleCharacters(this_ptr, j, input_character_index);
                            CatlikeCoding::TextBox::TextBox::OverFlow(this_ptr, j);
                            break;
                        }

                        current_line.horizontalStart = CatlikeCoding::TextBox::TextBox::GetLeftContour(this_ptr, current_line.baseline);
                        current_line.horizontalEnd = this_ptr->fields.width + CatlikeCoding::TextBox::TextBox::GetRightContour(this_ptr, current_line.baseline);

                        app::Vector2 vector2{
                            // You might wonder: Why would you subtract *scale* out of all things here?
                            // And you would be correct to ask! The original code did use positionInBox.x here, but
                            // it seems like the fields in the CharMetaData struct got rearranged by the compiler
                            // so it doesn't match with the stored layout anymore. Yes, this was a headache.
                            current_line.horizontalStart - this_ptr->fields.charMetaData->vector[j].scale,
                            current_line.baseline - cursor.y,
                        };

                        while (j <= input_character_index) {
                            CatlikeCoding::TextBox::CharMetaData::AdjustPositionInBox_1(
                                il2cpp::box_ref<app::CharMetaData__Boxed>(this_ptr->fields.charMetaData->vector[j]),
                                vector2
                            );
                            ++j;
                        }

                        cursor.x += vector2.x;
                        cursor.y = current_line.baseline;
                    }
                }
            }

            ++input_character_index;
        }
        after_while_loop:

        this_ptr->fields.boundsBottom = cursor.y + line_descent_of_current_line.baselineToBottom - this_ptr->fields.paddingBottom;

        if (!this_ptr->fields.overflowed) {
            current_line.lastCharIndex = this_ptr->fields.lastCharIndex;
            il2cpp::invoke(this_ptr->fields.lines, "Add", &current_line);

            if (this_ptr->fields.overflowBox != nullptr && this_ptr->fields.overflowBox != this_ptr) {
                CatlikeCoding::TextBox::TextBox::SetText_3(this_ptr->fields.overflowBox, this_ptr->fields.charMetaData, 0, 0);
                CatlikeCoding::TextBox::TextBox::RefreshText(this_ptr->fields.overflowBox);
            }
        }
    }

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
            }

            warn("messages", "missing > in style definition");
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
        //                                                         Vanilla font size
        style->fields.fontScale = static_cast<float>(font_scale) * 1.14f;
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
