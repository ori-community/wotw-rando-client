#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyCompanyAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyCompanyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AssemblyCompanyAttribute* this_ptr, app::String* company)
}
