#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugPlaceholder {
        namespace {
            app::SneezeSlugPlaceholder__Class* type_info_ref = nullptr;
        }
        app::SneezeSlugPlaceholder__Class** type_info = &type_info_ref;
        inline app::SneezeSlugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugPlaceholder__Class>(type_info, "", "SneezeSlugPlaceholder");
        }
        inline app::SneezeSlugPlaceholder* create() {
            return il2cpp::create_object<app::SneezeSlugPlaceholder>(get_class());
        }
    } // namespace SneezeSlugPlaceholder
} // namespace app::classes::types
