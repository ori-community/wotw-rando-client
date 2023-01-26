#pragma once
#include <Modloader/app/structs/RaycasterManager.h>
#include <Modloader/app/structs/RaycasterManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaycasterManager {
        inline app::RaycasterManager__Class** type_info() {
            static app::RaycasterManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaycasterManager__Class**)(modloader::win::memory::resolve_rva(0x0471A7F0));
            }
            return cache;
        }
        inline app::RaycasterManager__Class* get_class() {
            return il2cpp::get_class<app::RaycasterManager__Class>(type_info(), "UnityEngine.EventSystems", "RaycasterManager");
        }
        inline app::RaycasterManager* create() {
            return il2cpp::create_object<app::RaycasterManager>(get_class());
        }
    } // namespace RaycasterManager
} // namespace app::classes::types
