#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeLibImportClassAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::InteropServices::TypeLibImportClassAttribute {
    IL2CPP_REGISTER_METHOD(0x01A97550, void, ctor, (app::TypeLibImportClassAttribute * this_ptr, app::Type* import_class))
}
