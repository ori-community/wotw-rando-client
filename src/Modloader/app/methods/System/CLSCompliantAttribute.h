#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CLSCompliantAttribute.h>

namespace app::classes::System::CLSCompliantAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, app::CLSCompliantAttribute* this_ptr, bool is_compliant)
}
