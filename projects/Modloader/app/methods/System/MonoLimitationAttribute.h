#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoLimitationAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::MonoLimitationAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::MonoLimitationAttribute* this_ptr, app::String* comment)
}
