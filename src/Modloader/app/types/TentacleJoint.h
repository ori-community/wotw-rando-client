#pragma once
#include <Modloader/app/structs/TentacleJoint.h>
#include <Modloader/app/structs/TentacleJoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleJoint {
        inline app::TentacleJoint__Class** type_info() {
            static app::TentacleJoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleJoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleJoint__Class* get_class() {
            return il2cpp::get_class<app::TentacleJoint__Class>(type_info(), "", "TentacleJoint");
        }
        inline app::TentacleJoint* create() {
            return il2cpp::create_object<app::TentacleJoint>(get_class());
        }
    } // namespace TentacleJoint
} // namespace app::classes::types
