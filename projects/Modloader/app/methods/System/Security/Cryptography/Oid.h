#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Oid.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/OidGroup__Enum.h>

namespace app::classes::System::Security::Cryptography::Oid {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Oid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C0800, void, ctor_2, (app::Oid * this_ptr, app::String* oid))
    IL2CPP_REGISTER_METHOD(0x021C0840, void, ctor_3, (app::Oid * this_ptr, app::String* oid, app::OidGroup__Enum group, bool lookup_friendly_name))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::Oid * this_ptr, app::String* value, app::String* friendly_name))
    IL2CPP_REGISTER_METHOD(0x021C08C0, void, ctor_5, (app::Oid * this_ptr, app::Oid* oid))
    IL2CPP_REGISTER_METHODINFO(0x0473D100, Oid__ctor_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Value, (app::Oid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Value, (app::Oid * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x021C0990, app::String*, get_FriendlyName, (app::Oid * this_ptr))
} // namespace app::classes::System::Security::Cryptography::Oid
