#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeCompatibilityAttribute.h>

namespace app::classes::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RuntimeCompatibilityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_WrapNonExceptionThrows, (app::RuntimeCompatibilityAttribute * this_ptr, bool value))
} // namespace app::classes::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute
