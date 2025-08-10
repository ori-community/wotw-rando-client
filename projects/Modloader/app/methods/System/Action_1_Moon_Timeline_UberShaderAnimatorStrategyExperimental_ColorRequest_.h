#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest.h>

namespace app::classes::System::Action_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01D24D50,
        void,
        Invoke,
        app::Action_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_* this_ptr,
        app::UberShaderAnimatorStrategyExperimental_ColorRequest obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A014E0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_* this_ptr,
        app::UberShaderAnimatorStrategyExperimental_ColorRequest obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::Action_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Action_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_
