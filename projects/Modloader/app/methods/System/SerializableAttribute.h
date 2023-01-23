#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SerializableAttribute.h>

namespace app::classes::System::SerializableAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SerializableAttribute * this_ptr))
}
