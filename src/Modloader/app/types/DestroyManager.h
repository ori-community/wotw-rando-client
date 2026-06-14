#pragma once
#include <Modloader/app/structs/DestroyManager.h>
#include <Modloader/app/structs/DestroyManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyManager {
        inline app::DestroyManager__Class** type_info() {
            static app::DestroyManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DestroyManager__Class**)(modloader::win::memory::resolve_rva(0x0474F278));
            }
            return cache;
        }
        inline app::DestroyManager__Class* get_class() {
            return il2cpp::get_class<app::DestroyManager__Class>(type_info(), "", "DestroyManager");
        }
        inline app::DestroyManager* create() {
            return il2cpp::create_object<app::DestroyManager>(get_class());
        }
    } // namespace DestroyManager
} // namespace app::classes::types
