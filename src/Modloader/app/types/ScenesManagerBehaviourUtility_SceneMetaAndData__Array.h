#pragma once
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Array.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourUtility_SceneMetaAndData__Array {
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class** type_info() {
            static app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class>(type_info(), "", "ScenesManagerBehaviourUtility+SceneMetaAndData[]");
        }
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array>(get_class());
        }
    } // namespace ScenesManagerBehaviourUtility_SceneMetaAndData__Array
} // namespace app::classes::types
