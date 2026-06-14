#pragma once
#include <Modloader/app/structs/SneezeSlugPlaceholder.h>
#include <Modloader/app/structs/SneezeSlugPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugPlaceholder {
        inline app::SneezeSlugPlaceholder__Class** type_info() {
            static app::SneezeSlugPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugPlaceholder__Class>(type_info(), "", "SneezeSlugPlaceholder");
        }
        inline app::SneezeSlugPlaceholder* create() {
            return il2cpp::create_object<app::SneezeSlugPlaceholder>(get_class());
        }
    } // namespace SneezeSlugPlaceholder
} // namespace app::classes::types
