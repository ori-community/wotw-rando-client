#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdValidator__Class** type_info;
        inline app::XsdValidator__Class* get_class() {
            return il2cpp::get_class<app::XsdValidator__Class>(type_info, "System.Xml.Schema", "XsdValidator");
        }
        inline app::XsdValidator* create() {
            return il2cpp::create_object<app::XsdValidator>(get_class());
        }
    } // namespace XsdValidator
} // namespace app::classes::types
