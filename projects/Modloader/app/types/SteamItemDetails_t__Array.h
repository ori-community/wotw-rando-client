#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamItemDetails_t__Array__Class.h>
#include <Modloader/app/structs/SteamItemDetails_t__Array.h>

namespace app::classes::types {
    namespace SteamItemDetails_t__Array {
        namespace {
            inline app::SteamItemDetails_t__Array__Class* type_info_ref = nullptr;
        }
        inline app::SteamItemDetails_t__Array__Class** type_info = &type_info_ref;
        inline app::SteamItemDetails_t__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamItemDetails_t__Array__Class>(type_info, "Steamworks", "SteamItemDetails_t[]");
        }
        inline app::SteamItemDetails_t__Array* create() {
            return il2cpp::create_object<app::SteamItemDetails_t__Array>(get_class());
        }
    } // namespace SteamItemDetails_t__Array
} // namespace app::classes::types
