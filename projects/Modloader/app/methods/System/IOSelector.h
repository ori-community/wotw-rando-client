#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IOSelectorJob.h>

namespace app::classes::System::IOSelector {
    IL2CPP_REGISTER_METHOD(0x0200ADB0, void, Add, void* handle, app::IOSelectorJob* job)
}
