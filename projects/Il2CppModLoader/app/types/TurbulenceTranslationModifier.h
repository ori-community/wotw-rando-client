#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceTranslationModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurbulenceTranslationModifier__Class** type_info;
        inline app::TurbulenceTranslationModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTranslationModifier__Class>(type_info, "", "TurbulenceTranslationModifier");
        }
        inline app::TurbulenceTranslationModifier* create() {
            return il2cpp::create_object<app::TurbulenceTranslationModifier>(get_class());
        }
    } // namespace TurbulenceTranslationModifier
} // namespace app::classes::types
