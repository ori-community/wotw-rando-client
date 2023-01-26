#pragma once
#include <Modloader/app/structs/GhostManager.h>
#include <Modloader/app/structs/GhostManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostManager {
        inline app::GhostManager__Class** type_info() {
            static app::GhostManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostManager__Class**)(modloader::win::memory::resolve_rva(0x0477D0C8));
            }
            return cache;
        }
        inline app::GhostManager__Class* get_class() {
            return il2cpp::get_class<app::GhostManager__Class>(type_info(), "", "GhostManager");
        }
        inline app::GhostManager* create() {
            return il2cpp::create_object<app::GhostManager>(get_class());
        }
    } // namespace GhostManager
} // namespace app::classes::types
