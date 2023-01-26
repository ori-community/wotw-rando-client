#pragma once
#include <Modloader/app/structs/VerletSoftInteraction.h>
#include <Modloader/app/structs/VerletSoftInteraction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletSoftInteraction {
        inline app::VerletSoftInteraction__Class** type_info() {
            static app::VerletSoftInteraction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletSoftInteraction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletSoftInteraction__Class* get_class() {
            return il2cpp::get_class<app::VerletSoftInteraction__Class>(type_info(), "", "VerletSoftInteraction");
        }
        inline app::VerletSoftInteraction* create() {
            return il2cpp::create_object<app::VerletSoftInteraction>(get_class());
        }
    } // namespace VerletSoftInteraction
} // namespace app::classes::types
