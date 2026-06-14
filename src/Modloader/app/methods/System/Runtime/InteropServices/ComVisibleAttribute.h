#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComVisibleAttribute.h>

namespace app::classes::System::Runtime::InteropServices::ComVisibleAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::ComVisibleAttribute* this_ptr, bool visibility)
}
