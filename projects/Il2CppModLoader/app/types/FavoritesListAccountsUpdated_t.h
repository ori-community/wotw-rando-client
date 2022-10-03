#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FavoritesListAccountsUpdated_t {
        namespace {
            app::FavoritesListAccountsUpdated_t__Class* type_info_ref = nullptr;
        }
        app::FavoritesListAccountsUpdated_t__Class** type_info = &type_info_ref;
        inline app::FavoritesListAccountsUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::FavoritesListAccountsUpdated_t__Class>(type_info, "Steamworks", "FavoritesListAccountsUpdated_t");
        }
        inline app::FavoritesListAccountsUpdated_t* create() {
            return il2cpp::create_object<app::FavoritesListAccountsUpdated_t>(get_class());
        }
        inline app::FavoritesListAccountsUpdated_t__Boxed* box(app::FavoritesListAccountsUpdated_t value) {
            return il2cpp::box_value<app::FavoritesListAccountsUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace FavoritesListAccountsUpdated_t
} // namespace app::classes::types
