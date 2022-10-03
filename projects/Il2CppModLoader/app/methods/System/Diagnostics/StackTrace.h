#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::StackTrace {
    IL2CPP_REGISTER_METHOD(0x01741770, void, ctor_1, (app::StackTrace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01741780, void, ctor_2, (app::StackTrace * this_ptr, bool f_need_file_info))
    IL2CPP_REGISTER_METHOD(0x01741790, void, ctor_3, (app::StackTrace * this_ptr, int32_t skip_frames, bool f_need_file_info))
    IL2CPP_REGISTER_METHOD(0x017417A0, void, init_frames, (app::StackTrace * this_ptr, int32_t skip_frames, bool f_need_file_info))
    IL2CPP_REGISTER_METHODINFO(0x047157F0, StackTrace_init_frames__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01741AE0, app::StackFrame__Array*, get_trace, (app::Exception * e, int32_t skip_frames, bool f_need_file_info))
    IL2CPP_REGISTER_METHOD(0x01741AF0, void, ctor_4, (app::StackTrace * this_ptr, app::Exception* e, bool f_need_file_info))
    IL2CPP_REGISTER_METHOD(0x01741B10, void, ctor_5, (app::StackTrace * this_ptr, app::Exception* e, int32_t skip_frames, bool f_need_file_info))
    IL2CPP_REGISTER_METHODINFO(0x0477EA38, StackTrace__ctor_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01741C30, int32_t, get_FrameCount, (app::StackTrace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01741C40, app::StackFrame*, GetFrame, (app::StackTrace * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01741CB0, app::String*, GetAotId, ())
    IL2CPP_REGISTER_METHOD(0x01741DC0, bool, AddFrames, (app::StackTrace * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x017422E0, void, GetFullNameForStackTrace, (app::StackTrace * this_ptr, app::StringBuilder* sb, app::MethodBase* mi))
    IL2CPP_REGISTER_METHOD(0x017427E0, app::String*, ToString_1, (app::StackTrace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01742A00, app::String*, ToString_2, (app::StackTrace * this_ptr, app::StackTrace_TraceFormat__Enum trace_format))
} // namespace app::classes::System::Diagnostics::StackTrace
