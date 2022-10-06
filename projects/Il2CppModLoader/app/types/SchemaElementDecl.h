#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaElementDecl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SchemaElementDecl__Class** type_info;
        inline app::SchemaElementDecl__Class* get_class() {
            return il2cpp::get_class<app::SchemaElementDecl__Class>(type_info, "System.Xml.Schema", "SchemaElementDecl");
        }
        inline app::SchemaElementDecl* create() {
            return il2cpp::create_object<app::SchemaElementDecl>(get_class());
        }
        inline app::SchemaElementDecl__Array* create_array(int size) {
            return il2cpp::array_new<app::SchemaElementDecl__Array>(get_class(), size);
        }
        inline app::SchemaElementDecl__Array* create_array(const std::vector<app::SchemaElementDecl*>& items) {
            return il2cpp::array_new<app::SchemaElementDecl__Array>(get_class(), items);
        }
    } // namespace SchemaElementDecl
} // namespace app::classes::types
