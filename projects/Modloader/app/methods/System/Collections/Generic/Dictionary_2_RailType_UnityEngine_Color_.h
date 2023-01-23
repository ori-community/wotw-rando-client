#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Dictionary_2_RailType_UnityEngine_Color_.h>
#include <Modloader/app/structs/RailType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_RailType_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x02C3B360, app::Color, get_Item, (app::Dictionary_2_RailType_UnityEngine_Color_ * this_ptr, app::RailType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0478F588, Dictionary_2_RailType_UnityEngine_Color__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_RailType_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703160, Dictionary_2_RailType_UnityEngine_Color___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC5800, void, Add, (app::Dictionary_2_RailType_UnityEngine_Color_ * this_ptr, app::RailType__Enum key, app::Color value))
    IL2CPP_REGISTER_METHODINFO(0x04728C70, Dictionary_2_RailType_UnityEngine_Color__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_RailType_UnityEngine_Color_
