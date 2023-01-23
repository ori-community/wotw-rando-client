#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FieldOffsetAttribute.h>

namespace app::classes::System::Runtime::InteropServices::FieldOffsetAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::FieldOffsetAttribute * this_ptr, int32_t offset))
}
