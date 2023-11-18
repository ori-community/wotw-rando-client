#pragma once
#include <Modloader/app/structs/OriGhostRigVisuals.h>
#include <Modloader/app/structs/OriGhostRigVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriGhostRigVisuals {
        inline app::OriGhostRigVisuals__Class** type_info() {
            static app::OriGhostRigVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriGhostRigVisuals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriGhostRigVisuals__Class* get_class() {
            return il2cpp::get_class<app::OriGhostRigVisuals__Class>(type_info(), "", "OriGhostRigVisuals");
        }
        inline app::OriGhostRigVisuals* create() {
            return il2cpp::create_object<app::OriGhostRigVisuals>(get_class());
        }
    } // namespace OriGhostRigVisuals
} // namespace app::classes::types
