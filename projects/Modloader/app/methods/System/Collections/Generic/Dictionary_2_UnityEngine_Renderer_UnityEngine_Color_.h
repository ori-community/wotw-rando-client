#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x02E12ED0, app::Color, get_Item, (app::Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ * this_ptr, app::Renderer* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC5800, void, Add, (app::Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ * this_ptr, app::Renderer* key, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_
