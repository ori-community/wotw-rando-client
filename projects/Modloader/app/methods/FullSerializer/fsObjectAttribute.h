#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsObjectAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::FullSerializer::fsObjectAttribute {
    IL2CPP_REGISTER_METHOD(0x015145C0, void, ctor_1, (app::fsObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015145D0, void, ctor_2, (app::fsObjectAttribute * this_ptr, app::String* version_string, app::Type__Array* previous_models))
} // namespace app::classes::FullSerializer::fsObjectAttribute
