#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02CD27C0, app::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B5B200,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::InstantiateDebugUtility_InstanceInfo__Array* array,
        app::InstantiateDebugUtility_InstanceInfo value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5B2F0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::InstantiateDebugUtility_InstanceInfo__Array* array,
        app::InstantiateDebugUtility_InstanceInfo value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5B3E0,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5B4E0,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_
