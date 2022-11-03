#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamUGCQueryCompleted_t {
        namespace {
            inline app::SteamUGCQueryCompleted_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamUGCQueryCompleted_t__Class** type_info = &type_info_ref;
        inline app::SteamUGCQueryCompleted_t__Class* get_class() {
            return il2cpp::get_class<app::SteamUGCQueryCompleted_t__Class>(type_info, "Steamworks", "SteamUGCQueryCompleted_t");
        }
        inline app::SteamUGCQueryCompleted_t* create() {
            return il2cpp::create_object<app::SteamUGCQueryCompleted_t>(get_class());
        }
        inline app::SteamUGCQueryCompleted_t__Boxed* box(app::SteamUGCQueryCompleted_t value) {
            return il2cpp::box_value<app::SteamUGCQueryCompleted_t__Boxed>(get_class(), value);
        }
    } // namespace SteamUGCQueryCompleted_t
} // namespace app::classes::types
