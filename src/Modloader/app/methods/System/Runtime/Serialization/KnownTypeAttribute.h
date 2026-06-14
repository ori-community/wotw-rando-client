#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KnownTypeAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::KnownTypeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::KnownTypeAttribute* this_ptr, app::Type* type)
}
