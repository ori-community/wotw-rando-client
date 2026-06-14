#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenActio_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01D247B0,
        void,
        Invoke,
        app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A011A0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Action_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_
