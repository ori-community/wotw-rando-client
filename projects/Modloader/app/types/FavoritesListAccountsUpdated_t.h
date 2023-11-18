#pragma once
#include <Modloader/app/structs/FavoritesListAccountsUpdated_t.h>
#include <Modloader/app/structs/FavoritesListAccountsUpdated_t__Boxed.h>
#include <Modloader/app/structs/FavoritesListAccountsUpdated_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FavoritesListAccountsUpdated_t {
        inline app::FavoritesListAccountsUpdated_t__Class** type_info() {
            static app::FavoritesListAccountsUpdated_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FavoritesListAccountsUpdated_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FavoritesListAccountsUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::FavoritesListAccountsUpdated_t__Class>(type_info(), "Steamworks", "FavoritesListAccountsUpdated_t");
        }
        inline app::FavoritesListAccountsUpdated_t* create() {
            return il2cpp::create_object<app::FavoritesListAccountsUpdated_t>(get_class());
        }
        inline app::FavoritesListAccountsUpdated_t__Boxed* box(app::FavoritesListAccountsUpdated_t value) {
            return il2cpp::box_value<app::FavoritesListAccountsUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace FavoritesListAccountsUpdated_t
} // namespace app::classes::types
