#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SecurityElement_SecurityAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::SecurityElement_SecurityAttribute {
    IL2CPP_REGISTER_METHOD(0x01E216B0, void, ctor, (app::SecurityElement_SecurityAttribute * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::SecurityElement_SecurityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Value, (app::SecurityElement_SecurityAttribute * this_ptr))
} // namespace app::classes::System::Security::SecurityElement_SecurityAttribute
