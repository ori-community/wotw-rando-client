#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BugReporter_c.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/FileInfo.h>

namespace app::classes::BugReporter___c {
    IL2CPP_REGISTER_METHOD(0x00814710, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BugReporter_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00814850, app::DateTime, _GetLastRecording_b__124_0, app::BugReporter_c* this_ptr, app::FileInfo* f)
} // namespace app::classes::BugReporter___c
