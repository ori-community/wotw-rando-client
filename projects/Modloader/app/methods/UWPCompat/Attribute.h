#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::UWPCompat::Attribute {
    IL2CPP_REGISTER_METHOD(0x013DCFB0, bool, IsDefined, (app::FieldInfo_1 * field, app::Type* type))
}
