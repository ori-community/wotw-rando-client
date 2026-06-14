#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeEntry.h>

namespace app::classes::System::Runtime::Remoting::TypeEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TypeEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_AssemblyName, app::TypeEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_AssemblyName, app::TypeEntry* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_TypeName, app::TypeEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TypeName, app::TypeEntry* this_ptr, app::String* value)
} // namespace app::classes::System::Runtime::Remoting::TypeEntry
