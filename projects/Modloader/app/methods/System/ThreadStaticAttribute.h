#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ThreadStaticAttribute.h>

namespace app::classes::System::ThreadStaticAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ThreadStaticAttribute * this_ptr))
}
