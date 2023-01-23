#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeInfo_1.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::Remoting::TypeInfo {
    IL2CPP_REGISTER_METHOD(0x01D870A0, void, ctor, (app::TypeInfo_1 * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_TypeName, (app::TypeInfo_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D874C0, bool, CanCastTo, (app::TypeInfo_1 * this_ptr, app::Type* from_type, app::Object* o))
} // namespace app::classes::System::Runtime::Remoting::TypeInfo
