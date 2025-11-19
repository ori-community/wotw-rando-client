#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/screen_position.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/BitmapFont.h>
#include <Modloader/app/methods/TextBoxExtended.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/DestroyOnRestoreCheckpoint.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::api::messages {
    namespace {
        IL2CPP_INTERCEPT(app::Rect, TextBoxExtended, GetRect, app::TextBox* text_box) {
            const auto [anchor_x, anchor_y] = TextBoxExtended::ComputeAnchor(text_box);
            const auto line_count = CatlikeCoding::TextBox::TextBox::get_LineCount(text_box);
            auto left_edge = FLT_MAX;

            if (line_count == 0) {
                return app::Rect{
                    text_box->fields.boundsTop,
                    FLT_MAX,
                    0.0,
                    0.0,
                };
            }

            // The default for this in the vanilla code is 0, which is wrong and results in
            // wrong box sizes for left-aligned textboxes most of the time.
            auto right_edge = -FLT_MAX;

            for (auto i = 0; i < line_count; i = i + 1) {
                const auto line_info = CatlikeCoding::TextBox::TextBox::GetLineInfo(text_box, i);

                // These will be clamped to the first and last visible character below
                auto front = line_info.firstCharIndex;
                auto back = line_info.lastCharIndex;
                app::CharMetaData back_character_meta_data{};

                for (;;) {
                    back_character_meta_data = text_box->fields.charMetaData->vector[back];
                    if (back <= front || back_character_meta_data.type == app::CharType__Enum::Visible) {
                        break;
                    }
                    --back;
                }

                if (front == back && back_character_meta_data.type != app::CharType__Enum::Visible) {
                    continue;
                }

                const auto bitmap_font_char = CatlikeCoding::TextBox::BitmapFont::get_Item(back_character_meta_data.font, text_box->fields.charMetaData->vector[back].id);
                const auto scale = text_box->fields.charMetaData->vector[front].scale + anchor_x;
                if (scale <= left_edge) {
                    left_edge = scale;
                }

                const float new_right_edge = *reinterpret_cast<float*>(&back_character_meta_data.color.r) * bitmap_font_char->fields.width + back_character_meta_data.scale + anchor_x;

                if (right_edge <= new_right_edge) {
                    right_edge = new_right_edge;
                }
            }

            const auto start_line_info = CatlikeCoding::TextBox::TextBox::GetLineInfo(text_box, 0);
            const auto end_line_info = CatlikeCoding::TextBox::TextBox::GetLineInfo(text_box, line_count - 1);
            const auto output = app::Rect{
                left_edge,
                start_line_info.top + anchor_y,
                right_edge - left_edge,
                (end_line_info.bottom + anchor_y) - (start_line_info.top + anchor_y),
            };

            return output;
        }

        IL2CPP_INTERCEPT(void, CatlikeCoding::TextBox::TextBox, AlignTextCenterOrRight, app::TextBox* this_ptr) {
            next::CatlikeCoding::TextBox::TextBox::AlignTextCenterOrRight(this_ptr);

            // The vanilla text rendering code is only able to prepend space to a character.
            // That makes it virtually trim lines on the right side because if there is only spaces
            // on the right side of a character in a line, then that space cannot be rendered.
            // To bring back the space, we count the whitespace characters at the end of lines,
            // calculate the total whitespace width and shift the characters to the left.
            if (this_ptr->fields.charMetaData != nullptr) {
                int line_start_index = 0;
                float space_at_end_of_line = 0.f;

                for (int index = 0; index < this_ptr->fields.charMetaData->max_length; ++index) {
                    auto& char_meta = this_ptr->fields.charMetaData->vector[index];

                    if (char_meta.type == app::CharType__Enum::Visible) {
                        space_at_end_of_line = 0.f;
                        continue;
                    }

                    // char_meta.id is the UTF-8 code
                    switch (char_meta.id) {
                        case 32: {  // Space
                            space_at_end_of_line += this_ptr->fields.currentStyle.size * this_ptr->fields.currentStyle.font->fields.spaceAdvance;
                        } break;
                        case 9: {  // Tab
                            space_at_end_of_line += this_ptr->fields.tabSize * this_ptr->fields.currentStyle.font->fields.spaceAdvance;
                        } break;
                        case 10: {  // Line Feed
                            for (int char_index_to_move = line_start_index; char_index_to_move < index; ++char_index_to_move) {
                                auto& char_to_move = this_ptr->fields.charMetaData->vector[char_index_to_move];
                                char_to_move.scale -= space_at_end_of_line * (this_ptr->fields.alignment == app::AlignmentMode__Enum::Center ? 0.5f : 1.0f);
                            }

                            line_start_index = index + 1;
                        } break;
                        default:;
                    }
                }
            }
        }
    }
}
