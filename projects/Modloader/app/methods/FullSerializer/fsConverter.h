#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsConverter.h>

namespace app::classes::FullSerializer::fsConverter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::fsConverter* this_ptr)
}
