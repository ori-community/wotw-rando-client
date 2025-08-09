#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComImportAttribute.h>

namespace app::classes::System::Runtime::InteropServices::ComImportAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ComImportAttribute* this_ptr)
}
