#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DynamicCubeReference.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::Moon::DynamicCubeReference {
    IL2CPP_REGISTER_METHOD(0x031B03F0, void, Awake, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B0480, app::Transform*, get_TargetTransform, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703A10, DynamicCubeReference_get_TargetTransform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031B0670, app::Transform*, GetData, (app::DynamicCubeReference * this_ptr, int32_t export_i_d))
    IL2CPP_REGISTER_METHODINFO(0x04798C60, DynamicCubeReference_GetData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031B0730, void, OnGUI, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B08A0, void, SwitchCubeIndex, (app::DynamicCubeReference * this_ptr, int32_t new_index))
    IL2CPP_REGISTER_METHOD(0x031B0A10, float, GetTweenSpeed, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_1, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_2, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_3, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_4, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_5, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_6, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_7, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_8, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_9, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_10, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_11, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_12, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_13, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_14, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_15, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_16, (app::DynamicCubeReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_17, (app::DynamicCubeReference * this_ptr))
} // namespace app::classes::Moon::DynamicCubeReference
