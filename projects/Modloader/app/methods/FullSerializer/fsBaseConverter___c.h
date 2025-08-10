#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/fsBaseConverter_c.h>
#include <Modloader/app/structs/fsDataType__Enum.h>

namespace app::classes::FullSerializer::fsBaseConverter___c {
    IL2CPP_REGISTER_METHOD(0x01508F70, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::fsBaseConverter_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015090B0, app::String*, _FailExpectedType_b__6_0, app::fsBaseConverter_c* this_ptr, app::fsDataType__Enum t)
} // namespace app::classes::FullSerializer::fsBaseConverter___c
