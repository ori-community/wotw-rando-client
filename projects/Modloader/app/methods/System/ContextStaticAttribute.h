#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContextStaticAttribute.h>

namespace app::classes::System::ContextStaticAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ContextStaticAttribute * this_ptr))
}
