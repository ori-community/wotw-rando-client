#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x029FD190, void, Invoke, (app::Action_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::ScenesManagerBehaviourUtility_SceneMetaAndData obj))
    IL2CPP_REGISTER_METHOD(0x02A03910, app::IAsyncResult*, BeginInvoke, (app::Action_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::ScenesManagerBehaviourUtility_SceneMetaAndData obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_ScenesManagerBehaviourUtility_SceneMetaAndData_
