#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GenericCastManager_1_Command__NativeArrays_UnityEngine_RaycastCommand_ {
    IL2CPP_REGISTER_METHOD(0x00115940, int32_t, get_Capacity, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001542F0, void, set_Capacity, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001545D0, void, ctor, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Boxed * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00154730, void, Dispose, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00154880, void, CopyCmdsIn, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Boxed * this_ptr, app::RaycastCommand__Array * _cmds, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00154890, void, CopyHitsOut, (app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Boxed * this_ptr, app::RaycastHit__Array * _hits, int32_t count))
}
