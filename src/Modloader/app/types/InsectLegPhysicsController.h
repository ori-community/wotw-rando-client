#pragma once
#include <Modloader/app/structs/InsectLegPhysicsController.h>
#include <Modloader/app/structs/InsectLegPhysicsController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InsectLegPhysicsController {
        inline app::InsectLegPhysicsController__Class** type_info() {
            static app::InsectLegPhysicsController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InsectLegPhysicsController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InsectLegPhysicsController__Class* get_class() {
            return il2cpp::get_class<app::InsectLegPhysicsController__Class>(type_info(), "", "InsectLegPhysicsController");
        }
        inline app::InsectLegPhysicsController* create() {
            return il2cpp::create_object<app::InsectLegPhysicsController>(get_class());
        }
    } // namespace InsectLegPhysicsController
} // namespace app::classes::types
