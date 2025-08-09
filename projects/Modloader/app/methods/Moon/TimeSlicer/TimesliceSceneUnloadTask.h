#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimesliceSceneUnloadTask.h>

namespace app::classes::Moon::TimeSlicer::TimesliceSceneUnloadTask {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_SceneName, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, app::TimesliceSceneUnloadTask* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x010C5C10,
        void,
        ctor,
        app::TimesliceSceneUnloadTask* this_ptr,
        app::List_1_UnityEngine_GameObject_* target_objects,
        app::GameObject* scene_root,
        bool reversed_order,
        app::GameObject* owner,
        app::Action_1_Boolean_* on_job_completed,
        app::String* scene_name
    )
    IL2CPP_REGISTER_METHOD(
        0x010C5CB0,
        void,
        Config,
        app::TimesliceSceneUnloadTask* this_ptr,
        app::List_1_UnityEngine_GameObject_* target_objects,
        app::GameObject* scene_root,
        bool reversed_order,
        app::Action_1_Boolean_* on_job_completed
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C5CD0, void, ProcessAllObjects, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C5DB0, app::IEnumerator*, TimeslicedUnload, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C5F00, void, ProcessObject, app::TimesliceSceneUnloadTask* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x010C6060, void, Reset, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C60A0, app::String*, get_JobName, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_TimesliceJobOwnerName, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_ContextualDebugData, app::TimesliceSceneUnloadTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C6170, void, cctor, )
} // namespace app::classes::Moon::TimeSlicer::TimesliceSceneUnloadTask
