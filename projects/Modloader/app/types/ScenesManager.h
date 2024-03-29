#pragma once
#include <Modloader/app/structs/ScenesManager.h>
#include <Modloader/app/structs/ScenesManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManager {
        inline app::ScenesManager__Class** type_info() {
            static app::ScenesManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManager__Class**)(modloader::win::memory::resolve_rva(0x0478D1B8));
            }
            return cache;
        }
        inline app::ScenesManager__Class* get_class() {
            return il2cpp::get_class<app::ScenesManager__Class>(type_info(), "", "ScenesManager");
        }
        inline app::ScenesManager* create() {
            return il2cpp::create_object<app::ScenesManager>(get_class());
        }
    } // namespace ScenesManager
} // namespace app::classes::types
