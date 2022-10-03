#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugSettings {
        namespace {
            app::SneezeSlugSettings__Class* type_info_ref = nullptr;
        }
        app::SneezeSlugSettings__Class** type_info = &type_info_ref;
        inline app::SneezeSlugSettings__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugSettings__Class>(type_info, "", "SneezeSlugSettings");
        }
        inline app::SneezeSlugSettings* create() {
            return il2cpp::create_object<app::SneezeSlugSettings>(get_class());
        }
    } // namespace SneezeSlugSettings
} // namespace app::classes::types
