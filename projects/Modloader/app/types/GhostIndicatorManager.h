#pragma once
#include <Modloader/app/structs/GhostIndicatorManager.h>
#include <Modloader/app/structs/GhostIndicatorManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostIndicatorManager {
        inline app::GhostIndicatorManager__Class** type_info() {
            static app::GhostIndicatorManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostIndicatorManager__Class**)(modloader::win::memory::resolve_rva(0x04742230));
            }
            return cache;
        }
        inline app::GhostIndicatorManager__Class* get_class() {
            return il2cpp::get_class<app::GhostIndicatorManager__Class>(type_info(), "", "GhostIndicatorManager");
        }
        inline app::GhostIndicatorManager* create() {
            return il2cpp::create_object<app::GhostIndicatorManager>(get_class());
        }
    } // namespace GhostIndicatorManager
} // namespace app::classes::types
