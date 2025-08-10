#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_SetSceneHiddenAction.h>

namespace app::classes::System::Action_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01D247B0,
        void,
        Invoke,
        app::Action_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A01410,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::Action_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Action_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_
