#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_LightPriority_Layer_LightInfluence_.h>
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>
#include <Modloader/app/structs/LightInfluence.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_LightPriority_Layer_LightInfluence_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_LightPriority_Layer_LightInfluence_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724F50, Dictionary_2_LightPriority_Layer_LightInfluence___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_LightPriority_Layer_LightInfluence_ * this_ptr, app::LightPriority_Layer__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04740D28, Dictionary_2_LightPriority_Layer_LightInfluence__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_LightPriority_Layer_LightInfluence_ * this_ptr, app::LightPriority_Layer__Enum key, app::LightInfluence* value))
    IL2CPP_REGISTER_METHODINFO(0x04718458, Dictionary_2_LightPriority_Layer_LightInfluence__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_LightPriority_Layer_LightInfluence_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712B48, Dictionary_2_LightPriority_Layer_LightInfluence__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C35530, app::LightInfluence*, get_Item, (app::Dictionary_2_LightPriority_Layer_LightInfluence_ * this_ptr, app::LightPriority_Layer__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04783A40, Dictionary_2_LightPriority_Layer_LightInfluence__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_LightPriority_Layer_LightInfluence_
