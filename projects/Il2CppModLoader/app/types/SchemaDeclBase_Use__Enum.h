#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaDeclBase_Use__Enum {
        namespace {
            app::SchemaDeclBase_Use__Enum__Class* type_info_ref = nullptr;
        }
        app::SchemaDeclBase_Use__Enum__Class** type_info = &type_info_ref;
        inline app::SchemaDeclBase_Use__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SchemaDeclBase_Use__Enum__Class>(type_info, "System.Xml.Schema", "SchemaDeclBase", "Use");
        }
        inline app::SchemaDeclBase_Use__Enum* create() {
            return il2cpp::create_object<app::SchemaDeclBase_Use__Enum>(get_class());
        }
    } // namespace SchemaDeclBase_Use__Enum
} // namespace app::classes::types
