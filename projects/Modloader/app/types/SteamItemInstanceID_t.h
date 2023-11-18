#pragma once
#include <Modloader/app/structs/SteamItemInstanceID_t.h>
#include <Modloader/app/structs/SteamItemInstanceID_t__Array.h>
#include <Modloader/app/structs/SteamItemInstanceID_t__Boxed.h>
#include <Modloader/app/structs/SteamItemInstanceID_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamItemInstanceID_t {
        inline app::SteamItemInstanceID_t__Class** type_info() {
            static app::SteamItemInstanceID_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamItemInstanceID_t__Class**)(modloader::win::memory::resolve_rva(0x047867D8));
            }
            return cache;
        }
        inline app::SteamItemInstanceID_t__Class* get_class() {
            return il2cpp::get_class<app::SteamItemInstanceID_t__Class>(type_info(), "Steamworks", "SteamItemInstanceID_t");
        }
        inline app::SteamItemInstanceID_t* create() {
            return il2cpp::create_object<app::SteamItemInstanceID_t>(get_class());
        }
        inline app::SteamItemInstanceID_t__Boxed* box(app::SteamItemInstanceID_t value) {
            return il2cpp::box_value<app::SteamItemInstanceID_t__Boxed>(get_class(), value);
        }
        inline app::SteamItemInstanceID_t__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamItemInstanceID_t__Array>(get_class(), size);
        }
        inline app::SteamItemInstanceID_t__Array* create_array(const std::vector<app::SteamItemInstanceID_t>& items) {
            return il2cpp::array_new<app::SteamItemInstanceID_t__Array>(get_class(), items);
        }
    } // namespace SteamItemInstanceID_t
} // namespace app::classes::types
