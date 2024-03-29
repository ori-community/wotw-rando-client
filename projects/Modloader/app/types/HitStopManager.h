#pragma once
#include <Modloader/app/structs/HitStopManager.h>
#include <Modloader/app/structs/HitStopManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitStopManager {
        inline app::HitStopManager__Class** type_info() {
            static app::HitStopManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HitStopManager__Class**)(modloader::win::memory::resolve_rva(0x0470B158));
            }
            return cache;
        }
        inline app::HitStopManager__Class* get_class() {
            return il2cpp::get_class<app::HitStopManager__Class>(type_info(), "Moon", "HitStopManager");
        }
        inline app::HitStopManager* create() {
            return il2cpp::create_object<app::HitStopManager>(get_class());
        }
    } // namespace HitStopManager
} // namespace app::classes::types
