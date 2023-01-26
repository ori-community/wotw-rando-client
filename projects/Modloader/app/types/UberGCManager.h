#pragma once
#include <Modloader/app/structs/UberGCManager.h>
#include <Modloader/app/structs/UberGCManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCManager {
        inline app::UberGCManager__Class** type_info() {
            static app::UberGCManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberGCManager__Class**)(modloader::win::memory::resolve_rva(0x0476B2D0));
            }
            return cache;
        }
        inline app::UberGCManager__Class* get_class() {
            return il2cpp::get_class<app::UberGCManager__Class>(type_info(), "", "UberGCManager");
        }
        inline app::UberGCManager* create() {
            return il2cpp::create_object<app::UberGCManager>(get_class());
        }
    } // namespace UberGCManager
} // namespace app::classes::types
