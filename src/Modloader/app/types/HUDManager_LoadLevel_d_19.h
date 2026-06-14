#pragma once
#include <Modloader/app/structs/HUDManager_LoadLevel_d_19.h>
#include <Modloader/app/structs/HUDManager_LoadLevel_d_19__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HUDManager_LoadLevel_d_19 {
        inline app::HUDManager_LoadLevel_d_19__Class** type_info() {
            static app::HUDManager_LoadLevel_d_19__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HUDManager_LoadLevel_d_19__Class**)(modloader::win::memory::resolve_rva(0x04712738));
            }
            return cache;
        }
        inline app::HUDManager_LoadLevel_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::HUDManager_LoadLevel_d_19__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "HUDManager", "<LoadLevel>d__19");
        }
        inline app::HUDManager_LoadLevel_d_19* create() {
            return il2cpp::create_object<app::HUDManager_LoadLevel_d_19>(get_class());
        }
    } // namespace HUDManager_LoadLevel_d_19
} // namespace app::classes::types
