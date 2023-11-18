#pragma once
#include <Modloader/app/structs/SneezeSlugSettings.h>
#include <Modloader/app/structs/SneezeSlugSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugSettings {
        inline app::SneezeSlugSettings__Class** type_info() {
            static app::SneezeSlugSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugSettings__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugSettings__Class>(type_info(), "", "SneezeSlugSettings");
        }
        inline app::SneezeSlugSettings* create() {
            return il2cpp::create_object<app::SneezeSlugSettings>(get_class());
        }
    } // namespace SneezeSlugSettings
} // namespace app::classes::types
