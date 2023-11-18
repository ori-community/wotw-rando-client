#pragma once
#include <Modloader/app/structs/SteamUGCRequestUGCDetailsResult_t.h>
#include <Modloader/app/structs/SteamUGCRequestUGCDetailsResult_t__Boxed.h>
#include <Modloader/app/structs/SteamUGCRequestUGCDetailsResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamUGCRequestUGCDetailsResult_t {
        inline app::SteamUGCRequestUGCDetailsResult_t__Class** type_info() {
            static app::SteamUGCRequestUGCDetailsResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamUGCRequestUGCDetailsResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamUGCRequestUGCDetailsResult_t__Class* get_class() {
            return il2cpp::get_class<app::SteamUGCRequestUGCDetailsResult_t__Class>(type_info(), "Steamworks", "SteamUGCRequestUGCDetailsResult_t");
        }
        inline app::SteamUGCRequestUGCDetailsResult_t* create() {
            return il2cpp::create_object<app::SteamUGCRequestUGCDetailsResult_t>(get_class());
        }
        inline app::SteamUGCRequestUGCDetailsResult_t__Boxed* box(app::SteamUGCRequestUGCDetailsResult_t value) {
            return il2cpp::box_value<app::SteamUGCRequestUGCDetailsResult_t__Boxed>(get_class(), value);
        }
    } // namespace SteamUGCRequestUGCDetailsResult_t
} // namespace app::classes::types
