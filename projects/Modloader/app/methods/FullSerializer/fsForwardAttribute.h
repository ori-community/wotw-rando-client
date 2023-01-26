#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsForwardAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::FullSerializer::fsForwardAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::fsForwardAttribute * this_ptr, app::String* member_name))
}
