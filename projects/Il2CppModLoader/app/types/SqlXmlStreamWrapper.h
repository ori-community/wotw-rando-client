#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlXmlStreamWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlXmlStreamWrapper__Class** type_info;
        inline app::SqlXmlStreamWrapper__Class* get_class() {
            return il2cpp::get_class<app::SqlXmlStreamWrapper__Class>(type_info, "System.Data.SqlTypes", "SqlXmlStreamWrapper");
        }
        inline app::SqlXmlStreamWrapper* create() {
            return il2cpp::create_object<app::SqlXmlStreamWrapper>(get_class());
        }
    } // namespace SqlXmlStreamWrapper
} // namespace app::classes::types
