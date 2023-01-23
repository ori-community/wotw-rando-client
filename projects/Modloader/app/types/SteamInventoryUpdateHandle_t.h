#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamInventoryUpdateHandle_t__Class.h>
#include <Modloader/app/structs/SteamInventoryUpdateHandle_t.h>
#include <Modloader/app/structs/SteamInventoryUpdateHandle_t__Boxed.h>

namespace app::classes::types {
    namespace SteamInventoryUpdateHandle_t {
        inline app::SteamInventoryUpdateHandle_t__Class** type_info = (app::SteamInventoryUpdateHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0474C798));
        inline app::SteamInventoryUpdateHandle_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryUpdateHandle_t__Class>(type_info, "Steamworks", "SteamInventoryUpdateHandle_t");
        }
        inline app::SteamInventoryUpdateHandle_t* create() {
            return il2cpp::create_object<app::SteamInventoryUpdateHandle_t>(get_class());
        }
        inline app::SteamInventoryUpdateHandle_t__Boxed* box(app::SteamInventoryUpdateHandle_t value) {
            return il2cpp::box_value<app::SteamInventoryUpdateHandle_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryUpdateHandle_t
} // namespace app::classes::types
