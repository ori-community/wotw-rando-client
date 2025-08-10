#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DispIdAttribute.h>

namespace app::classes::System::Runtime::InteropServices::DispIdAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::DispIdAttribute* this_ptr, int32_t disp_id)
}
