#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NonEventAttribute.h>

namespace app::classes::System::Diagnostics::Tracing::NonEventAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NonEventAttribute* this_ptr)
}
