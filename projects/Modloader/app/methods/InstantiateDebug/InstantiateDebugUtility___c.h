#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>
#include <Modloader/app/structs/InstantiateDebugUtility_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::InstantiateDebug::InstantiateDebugUtility___c {
    IL2CPP_REGISTER_METHOD(0x0062F8A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InstantiateDebugUtility_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0062F9E0,
        app::String*,
        _DumpMetricsReport_b__21_0,
        app::InstantiateDebugUtility_c* this_ptr,
        app::InstantiateDebugUtility_InstanceInfo s
    )
} // namespace app::classes::InstantiateDebug::InstantiateDebugUtility___c
