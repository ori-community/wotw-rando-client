#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DfaContentValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DfaContentValidator__Class** type_info;
        inline app::DfaContentValidator__Class* get_class() {
            return il2cpp::get_class<app::DfaContentValidator__Class>(type_info, "System.Xml.Schema", "DfaContentValidator");
        }
        inline app::DfaContentValidator* create() {
            return il2cpp::create_object<app::DfaContentValidator>(get_class());
        }
    } // namespace DfaContentValidator
} // namespace app::classes::types
