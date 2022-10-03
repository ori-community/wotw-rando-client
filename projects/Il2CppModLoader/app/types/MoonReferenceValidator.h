#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonReferenceValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonReferenceValidator__Class** type_info;
        inline app::MoonReferenceValidator__Class* get_class() {
            return il2cpp::get_class<app::MoonReferenceValidator__Class>(type_info, "Moon", "MoonReferenceValidator");
        }
        inline app::MoonReferenceValidator* create() {
            return il2cpp::create_object<app::MoonReferenceValidator>(get_class());
        }
    } // namespace MoonReferenceValidator
} // namespace app::classes::types
