#pragma once
#include <Modloader/app/structs/SteamAPICallCompleted_t.h>
#include <Modloader/app/structs/SteamAPICallCompleted_t__Boxed.h>
#include <Modloader/app/structs/SteamAPICallCompleted_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamAPICallCompleted_t {
        inline app::SteamAPICallCompleted_t__Class** type_info() {
            static app::SteamAPICallCompleted_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamAPICallCompleted_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamAPICallCompleted_t__Class* get_class() {
            return il2cpp::get_class<app::SteamAPICallCompleted_t__Class>(type_info(), "Steamworks", "SteamAPICallCompleted_t");
        }
        inline app::SteamAPICallCompleted_t* create() {
            return il2cpp::create_object<app::SteamAPICallCompleted_t>(get_class());
        }
        inline app::SteamAPICallCompleted_t__Boxed* box(app::SteamAPICallCompleted_t value) {
            return il2cpp::box_value<app::SteamAPICallCompleted_t__Boxed>(get_class(), value);
        }
    } // namespace SteamAPICallCompleted_t
} // namespace app::classes::types
