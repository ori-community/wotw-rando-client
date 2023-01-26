#pragma once
#include <Modloader/app/structs/SteamInventoryDefinitionUpdate_t.h>
#include <Modloader/app/structs/SteamInventoryDefinitionUpdate_t__Boxed.h>
#include <Modloader/app/structs/SteamInventoryDefinitionUpdate_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryDefinitionUpdate_t {
        inline app::SteamInventoryDefinitionUpdate_t__Class** type_info() {
            static app::SteamInventoryDefinitionUpdate_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamInventoryDefinitionUpdate_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamInventoryDefinitionUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryDefinitionUpdate_t__Class>(type_info(), "Steamworks", "SteamInventoryDefinitionUpdate_t");
        }
        inline app::SteamInventoryDefinitionUpdate_t* create() {
            return il2cpp::create_object<app::SteamInventoryDefinitionUpdate_t>(get_class());
        }
        inline app::SteamInventoryDefinitionUpdate_t__Boxed* box(app::SteamInventoryDefinitionUpdate_t value) {
            return il2cpp::box_value<app::SteamInventoryDefinitionUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryDefinitionUpdate_t
} // namespace app::classes::types
