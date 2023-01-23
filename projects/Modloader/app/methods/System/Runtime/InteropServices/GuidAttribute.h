#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GuidAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::InteropServices::GuidAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GuidAttribute * this_ptr, app::String* guid))
}
