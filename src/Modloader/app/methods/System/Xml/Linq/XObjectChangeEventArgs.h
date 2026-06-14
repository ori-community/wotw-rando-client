#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XObjectChangeEventArgs.h>
#include <Modloader/app/structs/XObjectChange__Enum.h>

namespace app::classes::System::Xml::Linq::XObjectChangeEventArgs {
    IL2CPP_REGISTER_METHOD(0x0303BFF0, void, ctor, app::XObjectChangeEventArgs* this_ptr, app::XObjectChange__Enum object_change)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::XObjectChange__Enum, get_ObjectChange, app::XObjectChangeEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303C090, void, cctor, )
} // namespace app::classes::System::Xml::Linq::XObjectChangeEventArgs
