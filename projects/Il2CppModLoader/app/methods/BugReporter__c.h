#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BugReporter___c {
    IL2CPP_REGISTER_METHOD(0x00814710, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BugReporter_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00814850, app::DateTime, _GetLastRecording_b__124_0, (app::BugReporter_c * this_ptr, app::FileInfo * f))
    IL2CPP_REGISTER_METHODINFO(0x047642F8, BugReporter_c__GetLastRecording_b__124_0__MethodInfo)
}
