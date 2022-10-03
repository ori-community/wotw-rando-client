#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaType__Enum {
        namespace {
            app::SchemaType__Enum__Class* type_info_ref = nullptr;
        }
        app::SchemaType__Enum__Class** type_info = &type_info_ref;
        inline app::SchemaType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SchemaType__Enum__Class>(type_info, "System.Xml.Schema", "SchemaType");
        }
        inline app::SchemaType__Enum* create() {
            return il2cpp::create_object<app::SchemaType__Enum>(get_class());
        }
    } // namespace SchemaType__Enum
} // namespace app::classes::types
