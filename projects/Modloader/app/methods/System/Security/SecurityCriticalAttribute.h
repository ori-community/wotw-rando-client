#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SecurityCriticalAttribute.h>

namespace app::classes::System::Security::SecurityCriticalAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SecurityCriticalAttribute * this_ptr))
}
