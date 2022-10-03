#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContentValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContentValidator__Class** type_info;
        inline app::ContentValidator__Class* get_class() {
            return il2cpp::get_class<app::ContentValidator__Class>(type_info, "System.Xml.Schema", "ContentValidator");
        }
        inline app::ContentValidator* create() {
            return il2cpp::create_object<app::ContentValidator>(get_class());
        }
    } // namespace ContentValidator
} // namespace app::classes::types
