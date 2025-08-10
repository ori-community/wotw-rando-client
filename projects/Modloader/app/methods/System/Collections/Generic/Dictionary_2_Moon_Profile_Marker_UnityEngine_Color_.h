#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_.h>
#include <Modloader/app/structs/Marker__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_* this_ptr, app::Marker__Enum key)
    IL2CPP_REGISTER_METHOD(0x02C3B360, app::Color, get_Item, app::Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_* this_ptr, app::Marker__Enum key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BC5800, void, Add, app::Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_* this_ptr, app::Marker__Enum key, app::Color value)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_
