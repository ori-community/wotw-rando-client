#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SymbolsDictionary.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>

namespace app::classes::System::Xml::Schema::SymbolsDictionary {
    IL2CPP_REGISTER_METHOD(0x01ABB750, void, ctor, (app::SymbolsDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ABB970, int32_t, get_Count, (app::SymbolsDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsUpaEnforced, (app::SymbolsDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsUpaEnforced, (app::SymbolsDictionary * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01ABB980, int32_t, AddName, (app::SymbolsDictionary * this_ptr, app::XmlQualifiedName* name, app::Object* particle))
    IL2CPP_REGISTER_METHOD(0x01ABBB10, void, AddNamespaceList, (app::SymbolsDictionary * this_ptr, app::NamespaceList* list, app::Object* particle, bool allow_local))
    IL2CPP_REGISTER_METHOD(0x01ABBDB0, void, AddWildcard, (app::SymbolsDictionary * this_ptr, app::String* wildcard, app::Object* particle))
    IL2CPP_REGISTER_METHOD(0x01ABC010, app::ICollection*, GetNamespaceListSymbols, (app::SymbolsDictionary * this_ptr, app::NamespaceList* list))
    IL2CPP_REGISTER_METHOD(0x01ABC600, int32_t, get_Item, (app::SymbolsDictionary * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x01ABC740, bool, Exists, (app::SymbolsDictionary * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x01ABC770, app::Object*, GetParticle, (app::SymbolsDictionary * this_ptr, int32_t symbol))
    IL2CPP_REGISTER_METHOD(0x01ABC7B0, app::String*, NameOf, (app::SymbolsDictionary * this_ptr, int32_t symbol))
} // namespace app::classes::System::Xml::Schema::SymbolsDictionary
