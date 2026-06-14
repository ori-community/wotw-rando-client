#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Boxed.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstantiationType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::InstantiateDebug::InstantiateDebugUtility_InstanceInfo {
    IL2CPP_REGISTER_METHOD(
        0x00113780,
        void,
        ctor,
        app::InstantiateDebugUtility_InstanceInfo__Boxed* this_ptr,
        app::String* name,
        app::InstantiateDebugUtility_InstantiationType__Enum instantiation_type
    )
}
