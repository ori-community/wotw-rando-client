#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsDirectConverter.h>

namespace app::classes::FullSerializer::fsDirectConverter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::fsDirectConverter* this_ptr)
}
