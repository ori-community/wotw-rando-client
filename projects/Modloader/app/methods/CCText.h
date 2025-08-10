#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCFont.h>
#include <Modloader/app/structs/CCFont_Char.h>
#include <Modloader/app/structs/CCText.h>
#include <Modloader/app/structs/CCTextModifier.h>
#include <Modloader/app/structs/CCText_AlignmentMode__Enum.h>
#include <Modloader/app/structs/CCText_BoundingMode__Enum.h>
#include <Modloader/app/structs/CCText_HorizontalAnchorMode__Enum.h>
#include <Modloader/app/structs/CCText_VerticalAnchorMode__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CCText {
    IL2CPP_REGISTER_METHOD(0x0315D530, char16_t, get_Item, app::CCText* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00654950, app::CCText_AlignmentMode__Enum, get_Alignment, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D560, void, set_Alignment, app::CCText* this_ptr, app::CCText_AlignmentMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x00998570, app::CCText_BoundingMode__Enum, get_Bounding, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D570, void, set_Bounding, app::CCText* this_ptr, app::CCText_BoundingMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::CCText_HorizontalAnchorMode__Enum, get_HorizontalAnchor, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D580, void, set_HorizontalAnchor, app::CCText* this_ptr, app::CCText_HorizontalAnchorMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::CCText_VerticalAnchorMode__Enum, get_VerticalAnchor, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D590, void, set_VerticalAnchor, app::CCText* this_ptr, app::CCText_VerticalAnchorMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x0315D5A0, app::Vector3, get_CaretMinBounds, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D6C0, app::Vector3, get_CaretMaxBounds, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_ChunkSize, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D7E0, void, set_ChunkSize, app::CCText* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00643F40, app::Color, get_Color, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D810, void, set_Color, app::CCText* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::CCFont*, get_Font, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D870, void, set_Font, app::CCText* this_ptr, app::CCFont* value)
    IL2CPP_REGISTER_METHOD(0x0315D980, int32_t, get_Length, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_LineCount, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01050D20, float, get_LineHeight, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D9A0, void, set_LineHeight, app::CCText* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_LineWidth, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::CCTextModifier*, get_Modifier, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315D9D0, void, set_Modifier, app::CCText* this_ptr, app::CCTextModifier* value)
    IL2CPP_REGISTER_METHOD(0x010790F0, app::Vector3, get_Offset, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315DAA0, void, set_Offset, app::CCText* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_SpriteCount, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_UsedSpriteCount, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_Text, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315DC30, void, set_Text, app::CCText* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TabSize, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315DCE0, void, set_TabSize, app::CCText* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Width, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315DD10, void, set_Width, app::CCText* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0315DD40, void, Awake, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315DF90, void, Start, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315DFB0, void, OnDestroy, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315E0F0, int32_t, TriangleToCharacterIndex, app::CCText* this_ptr, int32_t triangle_index)
    IL2CPP_REGISTER_METHOD(0x0315E190, int32_t, HitCharacterIndex, app::CCText* this_ptr, app::RaycastHit hit)
    IL2CPP_REGISTER_METHOD(0x0315E2E0, void, ResetColors, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315E450, void, UpdateText, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315EF50, void, UpdateFromString, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315F5E0, void, UpdateSprite, app::CCText* this_ptr, app::CCFont_Char* c, int32_t index, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x0315F8A0, void, AlignCharsCenterOrRight, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315FB20, void, JustifyChars, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0315FC00, void, JustifyLine, app::CCText* this_ptr, int32_t first, int32_t last)
    IL2CPP_REGISTER_METHOD(0x0315FDA0, void, HideSprites, app::CCText* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0315FFE0, void, AddSpritesFromString, app::CCText* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x03160070, void, AddSprites, app::CCText* this_ptr, int32_t new_sprite_count)
    IL2CPP_REGISTER_METHOD(0x031608E0, bool, WordWrapFromString, app::CCText* this_ptr, int32_t text_index, int32_t vertex_index, app::Vector3* caret)
    IL2CPP_REGISTER_METHOD(0x03160BE0, void, ctor, app::CCText* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03160CA0, void, cctor, )
} // namespace app::classes::CCText
