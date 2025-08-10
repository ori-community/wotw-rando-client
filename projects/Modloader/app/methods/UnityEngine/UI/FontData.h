#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/FontData.h>
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/HorizontalWrapMode__Enum.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/VerticalWrapMode__Enum.h>

namespace app::classes::UnityEngine::UI::FontData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AD000, app::FontData*, get_defaultFontData, )
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::Font*, get_font, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_font, app::FontData* this_ptr, app::Font* value)
    IL2CPP_REGISTER_METHOD(0x024AD170, int32_t, get_fontSize, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_fontSize, app::FontData* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024AD180, app::FontStyle__Enum, get_fontStyle, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_fontStyle, app::FontData* this_ptr, app::FontStyle__Enum value)
    IL2CPP_REGISTER_METHOD(0x024AD190, bool, get_bestFit, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_bestFit, app::FontData* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00EB1C80, int32_t, get_minSize, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_minSize, app::FontData* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01F19BD0, int32_t, get_maxSize, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_maxSize, app::FontData* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024AD1A0, app::TextAnchor__Enum, get_alignment, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C4000, void, set_alignment, app::FontData* this_ptr, app::TextAnchor__Enum value)
    IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_alignByGeometry, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_alignByGeometry, app::FontData* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024AD1B0, bool, get_richText, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A080, void, set_richText, app::FontData* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01F30530, app::HorizontalWrapMode__Enum, get_horizontalOverflow, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_horizontalOverflow, app::FontData* this_ptr, app::HorizontalWrapMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F22020, app::VerticalWrapMode__Enum, get_verticalOverflow, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_verticalOverflow, app::FontData* this_ptr, app::VerticalWrapMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x024AD1C0, float, get_lineSpacing, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724030, void, set_lineSpacing, app::FontData* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, app::FontData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AD1D0, void, ISerializationCallbackReceiver_OnAfterDeserialize, app::FontData* this_ptr)
} // namespace app::classes::UnityEngine::UI::FontData
