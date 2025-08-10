#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XSDSchema_NameType.h>

namespace app::classes::System::Data::XSDSchema_NameType {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::XSDSchema_NameType* this_ptr, app::String* n, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x023E8610, int32_t, CompareTo, app::XSDSchema_NameType* this_ptr, app::Object* obj)
} // namespace app::classes::System::Data::XSDSchema_NameType
