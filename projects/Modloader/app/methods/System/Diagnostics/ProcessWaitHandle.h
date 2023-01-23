#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProcessWaitHandle.h>
#include <Modloader/app/structs/SafeProcessHandle.h>

namespace app::classes::System::Diagnostics::ProcessWaitHandle {
    IL2CPP_REGISTER_METHOD(0x020040B0, void, ctor, (app::ProcessWaitHandle * this_ptr, app::SafeProcessHandle* process_handle))
    IL2CPP_REGISTER_METHODINFO(0x04799038, ProcessWaitHandle__ctor__MethodInfo)
} // namespace app::classes::System::Diagnostics::ProcessWaitHandle
