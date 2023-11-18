#pragma once
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/SteamAPICall_t__Boxed.h>
#include <Modloader/app/structs/SteamAPICall_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamAPICall_t {
        inline app::SteamAPICall_t__Class** type_info() {
            static app::SteamAPICall_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamAPICall_t__Class**)(modloader::win::memory::resolve_rva(0x0475F9B0));
            }
            return cache;
        }
        inline app::SteamAPICall_t__Class* get_class() {
            return il2cpp::get_class<app::SteamAPICall_t__Class>(type_info(), "Steamworks", "SteamAPICall_t");
        }
        inline app::SteamAPICall_t* create() {
            return il2cpp::create_object<app::SteamAPICall_t>(get_class());
        }
        inline app::SteamAPICall_t__Boxed* box(app::SteamAPICall_t value) {
            return il2cpp::box_value<app::SteamAPICall_t__Boxed>(get_class(), value);
        }
    } // namespace SteamAPICall_t
} // namespace app::classes::types
