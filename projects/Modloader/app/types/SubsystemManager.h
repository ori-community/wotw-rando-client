#pragma once
#include <Modloader/app/structs/SubsystemManager.h>
#include <Modloader/app/structs/SubsystemManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubsystemManager {
        inline app::SubsystemManager__Class** type_info() {
            static app::SubsystemManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubsystemManager__Class**)(modloader::win::memory::resolve_rva(0x0475A6B8));
            }
            return cache;
        }
        inline app::SubsystemManager__Class* get_class() {
            return il2cpp::get_class<app::SubsystemManager__Class>(type_info(), "UnityEngine.Experimental", "SubsystemManager");
        }
        inline app::SubsystemManager* create() {
            return il2cpp::create_object<app::SubsystemManager>(get_class());
        }
    } // namespace SubsystemManager
} // namespace app::classes::types
