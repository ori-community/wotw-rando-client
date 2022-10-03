#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlXml {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlXml__Class** type_info;
        inline app::SqlXml__Class* get_class() {
            return il2cpp::get_class<app::SqlXml__Class>(type_info, "System.Data.SqlTypes", "SqlXml");
        }
        inline app::SqlXml* create() {
            return il2cpp::create_object<app::SqlXml>(get_class());
        }
    } // namespace SqlXml
} // namespace app::classes::types
