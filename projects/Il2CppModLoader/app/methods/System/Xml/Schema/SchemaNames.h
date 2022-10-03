#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::SchemaNames {
    IL2CPP_REGISTER_METHOD(0x01AB25D0, void, ctor, (app::SchemaNames * this_ptr, app::XmlNameTable* name_table))
    IL2CPP_REGISTER_METHOD(0x01AB5560, void, CreateTokenToQNameTable, (app::SchemaNames * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AB8A50, app::SchemaType__Enum, SchemaTypeFromRoot, (app::SchemaNames * this_ptr, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01AB8B10, bool, IsXSDRoot, (app::SchemaNames * this_ptr, app::String* local_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01AB8BA0, bool, IsXDRRoot, (app::SchemaNames * this_ptr, app::String* local_name, app::String* ns))
} // namespace app::classes::System::Xml::Schema::SchemaNames
