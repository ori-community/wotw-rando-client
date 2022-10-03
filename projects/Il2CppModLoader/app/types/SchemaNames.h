#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaNames {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SchemaNames__Class** type_info;
        inline app::SchemaNames__Class* get_class() {
            return il2cpp::get_class<app::SchemaNames__Class>(type_info, "System.Xml.Schema", "SchemaNames");
        }
        inline app::SchemaNames* create() {
            return il2cpp::create_object<app::SchemaNames>(get_class());
        }
    } // namespace SchemaNames
} // namespace app::classes::types
