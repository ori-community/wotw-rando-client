#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_NearbySceneData_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_MoonGuid_NearbySceneData_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04798050, Dictionary_2_MoonGuid_NearbySceneData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB8340, bool, TryGetValue, (app::Dictionary_2_MoonGuid_NearbySceneData_ * this_ptr, app::MoonGuid* key, app::NearbySceneData* value))
    IL2CPP_REGISTER_METHODINFO(0x0474BA70, Dictionary_2_MoonGuid_NearbySceneData__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB6480, void, Add, (app::Dictionary_2_MoonGuid_NearbySceneData_ * this_ptr, app::MoonGuid* key, app::NearbySceneData value))
    IL2CPP_REGISTER_METHODINFO(0x047546A8, Dictionary_2_MoonGuid_NearbySceneData__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB6430, void, set_Item, (app::Dictionary_2_MoonGuid_NearbySceneData_ * this_ptr, app::MoonGuid* key, app::NearbySceneData value))
    IL2CPP_REGISTER_METHODINFO(0x04763CC0, Dictionary_2_MoonGuid_NearbySceneData__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_MoonGuid_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F840, Dictionary_2_MoonGuid_NearbySceneData__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283F7F0, app::Dictionary_2_TKey_TValue_Enumerator_MoonGuid_NearbySceneData_, GetEnumerator, (app::Dictionary_2_MoonGuid_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047573C0, Dictionary_2_MoonGuid_NearbySceneData__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_NearbySceneData_
