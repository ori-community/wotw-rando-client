#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Moo_Timelin_ExperimentalTransparencyAnimatorSystemStrateg_SetSceneHiddenActio_.h>

namespace app::classes::System::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke,
        app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02892240,
        app::IAsyncResult*,
        BeginInvoke,
        app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x008A1BF0,
        bool,
        EndInvoke,
        app::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Predicate_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_
