#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DefaultDllImportSearchPathsAttribute.h>
#include <Modloader/app/structs/DllImportSearchPath__Enum.h>

namespace app::classes::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::DefaultDllImportSearchPathsAttribute * this_ptr, app::DllImportSearchPath__Enum paths))
}
