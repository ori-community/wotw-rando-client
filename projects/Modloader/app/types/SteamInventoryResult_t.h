#pragma once
#include <Modloader/app/structs/SteamInventoryResult_t.h>
#include <Modloader/app/structs/SteamInventoryResult_t__Boxed.h>
#include <Modloader/app/structs/SteamInventoryResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryResult_t {
        inline app::SteamInventoryResult_t__Class** type_info() {
            static app::SteamInventoryResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamInventoryResult_t__Class**)(modloader::win::memory::resolve_rva(0x04713A28));
            }
            return cache;
        }
        inline app::SteamInventoryResult_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryResult_t__Class>(type_info(), "Steamworks", "SteamInventoryResult_t");
        }
        inline app::SteamInventoryResult_t* create() {
            return il2cpp::create_object<app::SteamInventoryResult_t>(get_class());
        }
        inline app::SteamInventoryResult_t__Boxed* box(app::SteamInventoryResult_t value) {
            return il2cpp::box_value<app::SteamInventoryResult_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryResult_t
} // namespace app::classes::types
