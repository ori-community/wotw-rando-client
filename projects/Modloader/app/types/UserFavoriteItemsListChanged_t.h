#pragma once
#include <Modloader/app/structs/UserFavoriteItemsListChanged_t.h>
#include <Modloader/app/structs/UserFavoriteItemsListChanged_t__Boxed.h>
#include <Modloader/app/structs/UserFavoriteItemsListChanged_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserFavoriteItemsListChanged_t {
        inline app::UserFavoriteItemsListChanged_t__Class** type_info() {
            static app::UserFavoriteItemsListChanged_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserFavoriteItemsListChanged_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserFavoriteItemsListChanged_t__Class* get_class() {
            return il2cpp::get_class<app::UserFavoriteItemsListChanged_t__Class>(type_info(), "Steamworks", "UserFavoriteItemsListChanged_t");
        }
        inline app::UserFavoriteItemsListChanged_t* create() {
            return il2cpp::create_object<app::UserFavoriteItemsListChanged_t>(get_class());
        }
        inline app::UserFavoriteItemsListChanged_t__Boxed* box(app::UserFavoriteItemsListChanged_t value) {
            return il2cpp::box_value<app::UserFavoriteItemsListChanged_t__Boxed>(get_class(), value);
        }
    } // namespace UserFavoriteItemsListChanged_t
} // namespace app::classes::types
