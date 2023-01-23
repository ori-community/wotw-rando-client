#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/fsPropertyAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::FullSerializer::fsPropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x01514630, void, ctor_1, (app::fsPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::fsPropertyAttribute * this_ptr, app::String* name))
} // namespace app::classes::FullSerializer::fsPropertyAttribute
