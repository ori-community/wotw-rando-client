#pragma once
#include <Modloader/app/structs/SphereCastManager.h>
#include <Modloader/app/structs/SphereCastManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SphereCastManager {
        inline app::SphereCastManager__Class** type_info() {
            static app::SphereCastManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SphereCastManager__Class**)(modloader::win::memory::resolve_rva(0x0475AC18));
            }
            return cache;
        }
        inline app::SphereCastManager__Class* get_class() {
            return il2cpp::get_class<app::SphereCastManager__Class>(type_info(), "", "SphereCastManager");
        }
        inline app::SphereCastManager* create() {
            return il2cpp::create_object<app::SphereCastManager>(get_class());
        }
    } // namespace SphereCastManager
} // namespace app::classes::types
