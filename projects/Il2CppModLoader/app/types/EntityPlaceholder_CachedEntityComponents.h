#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder_CachedEntityComponents {
        namespace {
            app::EntityPlaceholder_CachedEntityComponents__Class* type_info_ref = nullptr;
        }
        app::EntityPlaceholder_CachedEntityComponents__Class** type_info = &type_info_ref;
        inline app::EntityPlaceholder_CachedEntityComponents__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_CachedEntityComponents__Class>(type_info, "", "EntityPlaceholder", "CachedEntityComponents");
        }
        inline app::EntityPlaceholder_CachedEntityComponents* create() {
            return il2cpp::create_object<app::EntityPlaceholder_CachedEntityComponents>(get_class());
        }
        inline app::EntityPlaceholder_CachedEntityComponents__Boxed* box(app::EntityPlaceholder_CachedEntityComponents value) {
            return il2cpp::box_value<app::EntityPlaceholder_CachedEntityComponents__Boxed>(get_class(), value);
        }
    } // namespace EntityPlaceholder_CachedEntityComponents
} // namespace app::classes::types
