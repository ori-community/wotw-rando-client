#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextGenerator.h>
#include <Modloader/app/structs/TextGenerationSettings.h>
#include <Modloader/app/structs/List_1_UnityEngine_UICharInfo_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UILineInfo_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TextGenerationError__Enum.h>
#include <Modloader/app/structs/IList_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/IList_1_UnityEngine_UICharInfo_.h>
#include <Modloader/app/structs/IList_1_UnityEngine_UILineInfo_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/VerticalWrapMode__Enum.h>
#include <Modloader/app/structs/HorizontalWrapMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::TextGenerator {
    IL2CPP_REGISTER_METHOD(0x0319B620, void, ctor_1, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319B630, void, ctor_2, (app::TextGenerator * this_ptr, int32_t initial_capacity))
    IL2CPP_REGISTER_METHOD(0x0319BB90, void, Finalize, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319BC70, void, IDisposable_Dispose, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319BD40, int32_t, get_characterCountVisible, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319BDA0, app::TextGenerationSettings, ValidatedSettings, (app::TextGenerator * this_ptr, app::TextGenerationSettings settings))
    IL2CPP_REGISTER_METHOD(0x0109C540, void, Invalidate, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319C110, void, GetCharacters, (app::TextGenerator * this_ptr, app::List_1_UnityEngine_UICharInfo_* characters))
    IL2CPP_REGISTER_METHOD(0x0319C170, void, GetLines, (app::TextGenerator * this_ptr, app::List_1_UnityEngine_UILineInfo_* lines))
    IL2CPP_REGISTER_METHOD(0x0319C1D0, void, GetVertices, (app::TextGenerator * this_ptr, app::List_1_UnityEngine_UIVertex_* vertices))
    IL2CPP_REGISTER_METHOD(0x0319C230, float, GetPreferredWidth, (app::TextGenerator * this_ptr, app::String* str, app::TextGenerationSettings settings))
    IL2CPP_REGISTER_METHOD(0x0319C300, float, GetPreferredHeight, (app::TextGenerator * this_ptr, app::String* str, app::TextGenerationSettings settings))
    IL2CPP_REGISTER_METHOD(0x0319C3C0, bool, PopulateWithErrors, (app::TextGenerator * this_ptr, app::String* str, app::TextGenerationSettings settings, app::GameObject* context))
    IL2CPP_REGISTER_METHOD(0x0319C620, bool, Populate, (app::TextGenerator * this_ptr, app::String* str, app::TextGenerationSettings settings))
    IL2CPP_REGISTER_METHOD(0x0319C680, app::TextGenerationError__Enum, PopulateWithError, (app::TextGenerator * this_ptr, app::String* str, app::TextGenerationSettings settings))
    IL2CPP_REGISTER_METHOD(0x0319C9C0, app::TextGenerationError__Enum, PopulateAlways, (app::TextGenerator * this_ptr, app::String* str, app::TextGenerationSettings settings))
    IL2CPP_REGISTER_METHOD(0x0319CC90, app::IList_1_UnityEngine_UIVertex_*, get_verts, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319CD10, app::IList_1_UnityEngine_UICharInfo_*, get_characters, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319CD90, app::IList_1_UnityEngine_UILineInfo_*, get_lines, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319CE10, app::Rect, get_rectExtents, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319CE90, int32_t, get_characterCount, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319CEE0, int32_t, get_lineCount, (app::TextGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319CF30, void*, Internal_Create, ())
    IL2CPP_REGISTER_METHOD(0x0319CF80, void, Internal_Destroy, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x0319CFD0, bool, Populate_Internal_1, (app::TextGenerator * this_ptr, app::String* str, app::Font* font, app::Color color, int32_t font_size, float scale_factor, float line_spacing, app::FontStyle__Enum style, bool rich_text, bool resize_text_for_best_fit, int32_t resize_text_min_size, int32_t resize_text_max_size, int32_t vertical_over_flow, int32_t horizontal_overflow, bool update_bounds, app::TextAnchor__Enum anchor, float extents_x, float extents_y, float pivot_x, float pivot_y, bool generate_out_of_bounds, bool align_by_geometry, uint32_t* error))
    IL2CPP_REGISTER_METHOD(0x0319D170, bool, Populate_Internal_2, (app::TextGenerator * this_ptr, app::String* str, app::Font* font, app::Color color, int32_t font_size, float scale_factor, float line_spacing, app::FontStyle__Enum style, bool rich_text, bool resize_text_for_best_fit, int32_t resize_text_min_size, int32_t resize_text_max_size, app::VerticalWrapMode__Enum vertical_over_flow, app::HorizontalWrapMode__Enum horizontal_overflow, bool update_bounds, app::TextAnchor__Enum anchor, app::Vector2 extents, app::Vector2 pivot, bool generate_out_of_bounds, bool align_by_geometry, app::TextGenerationError__Enum* error))
    IL2CPP_REGISTER_METHOD(0x0319C1D0, void, GetVerticesInternal, (app::TextGenerator * this_ptr, app::Object* vertices))
    IL2CPP_REGISTER_METHOD(0x0319C110, void, GetCharactersInternal, (app::TextGenerator * this_ptr, app::Object* characters))
    IL2CPP_REGISTER_METHOD(0x0319C170, void, GetLinesInternal, (app::TextGenerator * this_ptr, app::Object* lines))
    IL2CPP_REGISTER_METHOD(0x0319D3E0, void, get_rectExtents_Injected, (app::TextGenerator * this_ptr, app::Rect* ret))
    IL2CPP_REGISTER_METHOD(0x0319D440, bool, Populate_Internal_Injected, (app::TextGenerator * this_ptr, app::String* str, app::Font* font, app::Color* color, int32_t font_size, float scale_factor, float line_spacing, app::FontStyle__Enum style, bool rich_text, bool resize_text_for_best_fit, int32_t resize_text_min_size, int32_t resize_text_max_size, int32_t vertical_over_flow, int32_t horizontal_overflow, bool update_bounds, app::TextAnchor__Enum anchor, float extents_x, float extents_y, float pivot_x, float pivot_y, bool generate_out_of_bounds, bool align_by_geometry, uint32_t* error))
} // namespace app::classes::UnityEngine::TextGenerator
