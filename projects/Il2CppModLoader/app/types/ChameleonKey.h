#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChameleonKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChameleonKey__Class** type_info;
        inline app::ChameleonKey__Class* get_class() {
            return il2cpp::get_class<app::ChameleonKey__Class>(type_info, "System.Xml.Schema", "ChameleonKey");
        }
        inline app::ChameleonKey* create() {
            return il2cpp::create_object<app::ChameleonKey>(get_class());
        }
    } // namespace ChameleonKey
} // namespace app::classes::types
