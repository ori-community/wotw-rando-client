#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ZlibException.h>

namespace app::classes::Ionic::Zlib::ZlibException {
    IL2CPP_REGISTER_METHOD(0x03079D50, void, ctor, app::ZlibException* this_ptr, app::String* s)
}
