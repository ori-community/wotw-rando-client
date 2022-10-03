#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TimeSlicer::TimesliceResourceDestroyTask {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_SceneName, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, (app::TimesliceResourceDestroyTask * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x010C4D80, void, ctor, (app::TimesliceResourceDestroyTask * this_ptr, app::List_1_UnityEngine_Object_* target_objects, app::Action_1_Boolean_* on_job_completed, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x010C4DF0, void, Config, (app::TimesliceResourceDestroyTask * this_ptr, app::List_1_UnityEngine_Object_* target_objects, app::Action_1_Boolean_* on_job_completed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C4E00, void, ProcessAllObjects, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C4EC0, app::IEnumerator*, TimeslicedDestroy, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C5010, void, ProcessObject, (app::TimesliceResourceDestroyTask * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x010C5110, void, Reset, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C5140, app::String*, get_JobName, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_TimesliceJobOwnerName, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_ContextualDebugData, (app::TimesliceResourceDestroyTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C5210, void, cctor, ())
} // namespace app::classes::Moon::TimeSlicer::TimesliceResourceDestroyTask
