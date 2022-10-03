#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SchemaInfo__Class** type_info;
        inline app::SchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::SchemaInfo__Class>(type_info, "System.Xml.Schema", "SchemaInfo");
        }
        inline app::SchemaInfo* create() {
            return il2cpp::create_object<app::SchemaInfo>(get_class());
        }
    } // namespace SchemaInfo
} // namespace app::classes::types
