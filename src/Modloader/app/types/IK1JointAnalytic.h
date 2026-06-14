#pragma once
#include <Modloader/app/structs/IK1JointAnalytic.h>
#include <Modloader/app/structs/IK1JointAnalytic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IK1JointAnalytic {
        inline app::IK1JointAnalytic__Class** type_info() {
            static app::IK1JointAnalytic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IK1JointAnalytic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IK1JointAnalytic__Class* get_class() {
            return il2cpp::get_class<app::IK1JointAnalytic__Class>(type_info(), "", "IK1JointAnalytic");
        }
        inline app::IK1JointAnalytic* create() {
            return il2cpp::create_object<app::IK1JointAnalytic>(get_class());
        }
    } // namespace IK1JointAnalytic
} // namespace app::classes::types
