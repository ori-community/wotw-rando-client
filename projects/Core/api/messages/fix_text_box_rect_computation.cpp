#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/messages/text_style.h>
#include <Core/api/screen_position.h>
#include <Core/api/system/message_provider.h>
#include <Core/utils/position_converter.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/BitmapFont.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MessageBoxVisibility.h>
#include <Modloader/app/methods/ScaleToTextBox.h>
#include <Modloader/app/methods/SoundSource.h>
#include <Modloader/app/methods/TextBoxExtended.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/ParticleSuspender.h>
#include <Modloader/app/types/ScaleToTextBox.h>
#include <Modloader/app/types/SoundSource.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_math.h>
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
                const auto front = line_info.firstCharIndex;
                auto back = line_info.lastCharIndex;
                app::CharMetaData back_meta_data{};
                while (true) {
                    back_meta_data = text_box->fields.charMetaData->vector[back];
                    if (back <= front || back_meta_data.type == app::CharType__Enum::Visible) {
                        break;
                    }

                    --back;
                }


                const auto bitmap_font_char = CatlikeCoding::TextBox::BitmapFont::get_Item(back_meta_data.font, text_box->fields.charMetaData->vector[back].id);
                const auto scale = text_box->fields.charMetaData->vector[front].scale + anchor_x;
                if (scale <= left_edge) {
                    left_edge = scale;
                }

                const float new_right_edge = *reinterpret_cast<float*>(&back_meta_data.color.r) * bitmap_font_char->fields.width + back_meta_data.scale + anchor_x;

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
    }
}
