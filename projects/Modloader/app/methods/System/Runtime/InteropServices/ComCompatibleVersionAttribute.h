#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComCompatibleVersionAttribute.h>

namespace app::classes::System::Runtime::InteropServices::ComCompatibleVersionAttribute {
    IL2CPP_REGISTER_METHOD(0x01A93F70, void, ctor, app::ComCompatibleVersionAttribute* this_ptr, int32_t major, int32_t minor, int32_t build, int32_t revision)
}
