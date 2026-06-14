#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsMissingVersionConstructorException.h>

namespace app::classes::FullSerializer::fsMissingVersionConstructorException {
    IL2CPP_REGISTER_METHOD(0x015144F0, void, ctor, app::fsMissingVersionConstructorException* this_ptr, app::Type* versioned_type, app::Type* constructor_type)
}
