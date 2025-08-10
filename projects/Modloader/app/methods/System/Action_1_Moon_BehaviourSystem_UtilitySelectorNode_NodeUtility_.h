#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility.h>

namespace app::classes::System::Action_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01D247B0,
        void,
        Invoke,
        app::Action_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* this_ptr,
        app::UtilitySelectorNode_NodeUtility obj
    )
    IL2CPP_REGISTER_METHOD(
        0x029FFB40,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* this_ptr,
        app::UtilitySelectorNode_NodeUtility obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::Action_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Action_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_
