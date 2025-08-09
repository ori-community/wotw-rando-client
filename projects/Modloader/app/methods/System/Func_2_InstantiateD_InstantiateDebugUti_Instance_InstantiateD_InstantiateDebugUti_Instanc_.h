#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_InstantiateD_InstantiateDebugUti_Instance_InstantiateD_InstantiateDebugUti_Instanc_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02883150,
        app::InstantiateDebugUtility_InstanceInfo,
        Invoke,
        app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::InstantiateDebugUtility_InstanceInfo arg
    )
    IL2CPP_REGISTER_METHOD(
        0x02883690,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::InstantiateDebugUtility_InstanceInfo arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x028830F0,
        app::InstantiateDebugUtility_InstanceInfo,
        EndInvoke,
        app::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Func_2_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_
