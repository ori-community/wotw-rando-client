#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/TurtleAIUtilities.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::TurtleAIUtilities {
    IL2CPP_REGISTER_METHOD(0x013D7A10, app::Sensor*, get_Sensor, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Sensor, app::TurtleAIUtilities* this_ptr, app::Sensor* value)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_UtilityDodge, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A28F40, float, get_UtilityAttack, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D7AE0, void, OnEnable, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D7B80, void, OnDisable, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D7C20, void, OnUpdate, app::TurtleAIUtilities* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x013D7DC0, void, ctor, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_1, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_2, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_3, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_4, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_5, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_6, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_7, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_8, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_9, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_10, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_11, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_12, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_13, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_14, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_15, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_16, app::TurtleAIUtilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_17, app::TurtleAIUtilities* this_ptr)
} // namespace app::classes::TurtleAIUtilities
