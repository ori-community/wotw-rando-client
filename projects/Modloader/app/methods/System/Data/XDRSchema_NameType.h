#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XDRSchema_NameType.h>

namespace app::classes::System::Data::XDRSchema_NameType {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::XDRSchema_NameType* this_ptr, app::String* n, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x023D0980, int32_t, CompareTo, app::XDRSchema_NameType* this_ptr, app::Object* obj)
} // namespace app::classes::System::Data::XDRSchema_NameType
