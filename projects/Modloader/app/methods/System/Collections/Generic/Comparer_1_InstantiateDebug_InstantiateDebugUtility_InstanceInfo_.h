#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#include <Modloader/app/structs/Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x02C9F5C0,
        app::Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_*,
        Create,
        app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x02C9F7C0, app::Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x0280A070,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_
