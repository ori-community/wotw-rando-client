#pragma once
#include <Modloader/app/structs/SetupModifierTargetGizmoAttribute.h>
#include <Modloader/app/structs/SetupModifierTargetGizmoAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupModifierTargetGizmoAttribute {
        inline app::SetupModifierTargetGizmoAttribute__Class** type_info() {
            static app::SetupModifierTargetGizmoAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupModifierTargetGizmoAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupModifierTargetGizmoAttribute__Class* get_class() {
            return il2cpp::get_class<app::SetupModifierTargetGizmoAttribute__Class>(type_info(), "", "SetupModifierTargetGizmoAttribute");
        }
        inline app::SetupModifierTargetGizmoAttribute* create() {
            return il2cpp::create_object<app::SetupModifierTargetGizmoAttribute>(get_class());
        }
    } // namespace SetupModifierTargetGizmoAttribute
} // namespace app::classes::types
