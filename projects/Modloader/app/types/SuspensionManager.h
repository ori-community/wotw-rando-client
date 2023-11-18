#pragma once
#include <Modloader/app/structs/SuspensionManager.h>
#include <Modloader/app/structs/SuspensionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspensionManager {
        inline app::SuspensionManager__Class** type_info() {
            static app::SuspensionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SuspensionManager__Class**)(modloader::win::memory::resolve_rva(0x04720CD0));
            }
            return cache;
        }
        inline app::SuspensionManager__Class* get_class() {
            return il2cpp::get_class<app::SuspensionManager__Class>(type_info(), "Moon", "SuspensionManager");
        }
        inline app::SuspensionManager* create() {
            return il2cpp::create_object<app::SuspensionManager>(get_class());
        }
    } // namespace SuspensionManager
} // namespace app::classes::types
