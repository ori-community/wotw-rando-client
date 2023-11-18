#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivatedClientTypeEntry.h>
#include <Modloader/app/structs/IContextAttribute__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Remoting::ActivatedClientTypeEntry {
    IL2CPP_REGISTER_METHOD(0x01A97590, void, ctor, (app::ActivatedClientTypeEntry * this_ptr, app::String* type_name, app::String* assembly_name, app::String* app_url))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_ApplicationUrl, (app::ActivatedClientTypeEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IContextAttribute__Array*, get_ContextAttributes, (app::ActivatedClientTypeEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Type*, get_ObjectType, (app::ActivatedClientTypeEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A976E0, app::String*, ToString, (app::ActivatedClientTypeEntry * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::ActivatedClientTypeEntry
