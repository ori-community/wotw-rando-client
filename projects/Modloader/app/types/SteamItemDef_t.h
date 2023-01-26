#pragma once
#include <Modloader/app/structs/SteamItemDef_t.h>
#include <Modloader/app/structs/SteamItemDef_t__Array.h>
#include <Modloader/app/structs/SteamItemDef_t__Boxed.h>
#include <Modloader/app/structs/SteamItemDef_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamItemDef_t {
        inline app::SteamItemDef_t__Class** type_info() {
            static app::SteamItemDef_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamItemDef_t__Class**)(modloader::win::memory::resolve_rva(0x0475B1E0));
            }
            return cache;
        }
        inline app::SteamItemDef_t__Class* get_class() {
            return il2cpp::get_class<app::SteamItemDef_t__Class>(type_info(), "Steamworks", "SteamItemDef_t");
        }
        inline app::SteamItemDef_t* create() {
            return il2cpp::create_object<app::SteamItemDef_t>(get_class());
        }
        inline app::SteamItemDef_t__Boxed* box(app::SteamItemDef_t value) {
            return il2cpp::box_value<app::SteamItemDef_t__Boxed>(get_class(), value);
        }
        inline app::SteamItemDef_t__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamItemDef_t__Array>(get_class(), size);
        }
        inline app::SteamItemDef_t__Array* create_array(const std::vector<app::SteamItemDef_t>& items) {
            return il2cpp::array_new<app::SteamItemDef_t__Array>(get_class(), items);
        }
    } // namespace SteamItemDef_t
} // namespace app::classes::types
