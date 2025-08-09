#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeLibVersionAttribute.h>

namespace app::classes::System::Runtime::InteropServices::TypeLibVersionAttribute {
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor, app::TypeLibVersionAttribute* this_ptr, int32_t major, int32_t minor)
}
