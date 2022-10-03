#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TimesliceLigthCanvasSetPosTask {
    IL2CPP_REGISTER_METHOD(0x00AF5190, void, ctor, (app::TimesliceLigthCanvasSetPosTask * this_ptr, app::Object_1* source))
    IL2CPP_REGISTER_METHOD(0x00AF51D0, void, Config, (app::TimesliceLigthCanvasSetPosTask * this_ptr, app::List_1_UnityEngine_Renderer_* target_objects, app::Vector3 position, app::Action_1_Boolean_* on_job_completed))
    IL2CPP_REGISTER_METHOD(0x00AF5390, void, ProcessAllObjects, (app::TimesliceLigthCanvasSetPosTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF5450, app::IEnumerator*, TimeslicedSetPos, (app::TimesliceLigthCanvasSetPosTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF55A0, void, ProcessObject, (app::TimesliceLigthCanvasSetPosTask * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x00AF57F0, void, Reset, (app::TimesliceLigthCanvasSetPosTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF5820, app::String*, get_JobName, (app::TimesliceLigthCanvasSetPosTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_TimesliceJobOwnerName, (app::TimesliceLigthCanvasSetPosTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_ContextualDebugData, (app::TimesliceLigthCanvasSetPosTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF58F0, void, cctor, ())
} // namespace app::classes::TimesliceLigthCanvasSetPosTask
