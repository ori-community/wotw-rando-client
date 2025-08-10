#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObjectExtensions_c_3_1_System_Object_.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::GameObjectExtensions___c__3_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019DE4F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::GameObjectExtensions_c_3_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E8370, bool, _GetInterfacesInChildren_b__3_0, app::GameObjectExtensions_c_3_1_System_Object_* this_ptr, app::MonoBehaviour* a)
    IL2CPP_REGISTER_METHOD(0x019E86B0, bool, _GetInterfacesInChildren_b__3_2, app::GameObjectExtensions_c_3_1_System_Object_* this_ptr, app::Type* k)
    IL2CPP_REGISTER_METHOD(
        0x019E8310,
        app::Object*,
        _GetInterfacesInChildren_b__3_1,
        app::GameObjectExtensions_c_3_1_System_Object_* this_ptr,
        app::MonoBehaviour* a
    )
} // namespace app::classes::GameObjectExtensions___c__3_1_System_Object_
