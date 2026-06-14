#pragma once
#include <Modloader/app/structs/IsInSceneCondition.h>
#include <Modloader/app/structs/IsInSceneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsInSceneCondition {
        inline app::IsInSceneCondition__Class** type_info() {
            static app::IsInSceneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsInSceneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsInSceneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsInSceneCondition__Class>(type_info(), "", "IsInSceneCondition");
        }
        inline app::IsInSceneCondition* create() {
            return il2cpp::create_object<app::IsInSceneCondition>(get_class());
        }
    } // namespace IsInSceneCondition
} // namespace app::classes::types
