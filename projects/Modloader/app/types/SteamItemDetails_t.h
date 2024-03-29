#pragma once
#include <Modloader/app/structs/SteamItemDetails_t.h>
#include <Modloader/app/structs/SteamItemDetails_t__Array.h>
#include <Modloader/app/structs/SteamItemDetails_t__Boxed.h>
#include <Modloader/app/structs/SteamItemDetails_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamItemDetails_t {
        inline app::SteamItemDetails_t__Class** type_info() {
            static app::SteamItemDetails_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamItemDetails_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamItemDetails_t__Class* get_class() {
            return il2cpp::get_class<app::SteamItemDetails_t__Class>(type_info(), "Steamworks", "SteamItemDetails_t");
        }
        inline app::SteamItemDetails_t* create() {
            return il2cpp::create_object<app::SteamItemDetails_t>(get_class());
        }
        inline app::SteamItemDetails_t__Boxed* box(app::SteamItemDetails_t value) {
            return il2cpp::box_value<app::SteamItemDetails_t__Boxed>(get_class(), value);
        }
        inline app::SteamItemDetails_t__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamItemDetails_t__Array>(get_class(), size);
        }
        inline app::SteamItemDetails_t__Array* create_array(const std::vector<app::SteamItemDetails_t>& items) {
            return il2cpp::array_new<app::SteamItemDetails_t__Array>(get_class(), items);
        }
    } // namespace SteamItemDetails_t
} // namespace app::classes::types
