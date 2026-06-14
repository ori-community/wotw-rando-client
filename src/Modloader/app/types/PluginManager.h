#pragma once
#include <Modloader/app/structs/PluginManager.h>
#include <Modloader/app/structs/PluginManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PluginManager {
        inline app::PluginManager__Class** type_info() {
            static app::PluginManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PluginManager__Class**)(modloader::win::memory::resolve_rva(0x0470D3A8));
            }
            return cache;
        }
        inline app::PluginManager__Class* get_class() {
            return il2cpp::get_class<app::PluginManager__Class>(type_info(), "PlayFab", "PluginManager");
        }
        inline app::PluginManager* create() {
            return il2cpp::create_object<app::PluginManager>(get_class());
        }
    } // namespace PluginManager
} // namespace app::classes::types
