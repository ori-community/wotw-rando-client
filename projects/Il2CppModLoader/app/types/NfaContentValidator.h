#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NfaContentValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NfaContentValidator__Class** type_info;
        inline app::NfaContentValidator__Class* get_class() {
            return il2cpp::get_class<app::NfaContentValidator__Class>(type_info, "System.Xml.Schema", "NfaContentValidator");
        }
        inline app::NfaContentValidator* create() {
            return il2cpp::create_object<app::NfaContentValidator>(get_class());
        }
    } // namespace NfaContentValidator
} // namespace app::classes::types
