#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebuggableAttribute.h>
#include <Modloader/app/structs/DebuggableAttribute_DebuggingModes__Enum.h>

namespace app::classes::System::Diagnostics::DebuggableAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::DebuggableAttribute * this_ptr, app::DebuggableAttribute_DebuggingModes__Enum modes))
}
