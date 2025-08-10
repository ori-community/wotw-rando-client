#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsDuplicateVersionNameException.h>

namespace app::classes::FullSerializer::fsDuplicateVersionNameException {
    IL2CPP_REGISTER_METHOD(0x0150C110, void, ctor, app::fsDuplicateVersionNameException* this_ptr, app::Type* type_a, app::Type* type_b, app::String* version)
}
