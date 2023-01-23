#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkEnumFlagAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::AkEnumFlagAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AkEnumFlagAttribute * this_ptr, app::Type* type))
}
