#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Nullable {
    IL2CPP_REGISTER_METHOD(0x0226F650, app::Type*, GetUnderlyingType, (app::Type * nullable_type))
}
