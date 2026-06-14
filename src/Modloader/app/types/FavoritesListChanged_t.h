#pragma once
#include <Modloader/app/structs/FavoritesListChanged_t.h>
#include <Modloader/app/structs/FavoritesListChanged_t__Boxed.h>
#include <Modloader/app/structs/FavoritesListChanged_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FavoritesListChanged_t {
        inline app::FavoritesListChanged_t__Class** type_info() {
            static app::FavoritesListChanged_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FavoritesListChanged_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FavoritesListChanged_t__Class* get_class() {
            return il2cpp::get_class<app::FavoritesListChanged_t__Class>(type_info(), "Steamworks", "FavoritesListChanged_t");
        }
        inline app::FavoritesListChanged_t* create() {
            return il2cpp::create_object<app::FavoritesListChanged_t>(get_class());
        }
        inline app::FavoritesListChanged_t__Boxed* box(app::FavoritesListChanged_t value) {
            return il2cpp::box_value<app::FavoritesListChanged_t__Boxed>(get_class(), value);
        }
    } // namespace FavoritesListChanged_t
} // namespace app::classes::types
