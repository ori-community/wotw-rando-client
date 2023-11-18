#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsConverterRegistrar.h>

namespace app::classes::FullSerializer::fsConverterRegistrar {
    IL2CPP_REGISTER_METHOD(0x015098E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsConverterRegistrar * this_ptr))
} // namespace app::classes::FullSerializer::fsConverterRegistrar
