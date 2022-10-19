#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamUGCRequestUGCDetailsResult_t {
        namespace {
            inline app::SteamUGCRequestUGCDetailsResult_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamUGCRequestUGCDetailsResult_t__Class** type_info = &type_info_ref;
        inline app::SteamUGCRequestUGCDetailsResult_t__Class* get_class() {
            return il2cpp::get_class<app::SteamUGCRequestUGCDetailsResult_t__Class>(type_info, "Steamworks", "SteamUGCRequestUGCDetailsResult_t");
        }
        inline app::SteamUGCRequestUGCDetailsResult_t* create() {
            return il2cpp::create_object<app::SteamUGCRequestUGCDetailsResult_t>(get_class());
        }
        inline app::SteamUGCRequestUGCDetailsResult_t__Boxed* box(app::SteamUGCRequestUGCDetailsResult_t value) {
            return il2cpp::box_value<app::SteamUGCRequestUGCDetailsResult_t__Boxed>(get_class(), value);
        }
    } // namespace SteamUGCRequestUGCDetailsResult_t
} // namespace app::classes::types
