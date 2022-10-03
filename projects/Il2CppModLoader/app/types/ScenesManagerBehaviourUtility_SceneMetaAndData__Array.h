#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourUtility_SceneMetaAndData__Array {
        namespace {
            app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class* type_info_ref = nullptr;
        }
        app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class** type_info = &type_info_ref;
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class>(type_info, "", "ScenesManagerBehaviourUtility+SceneMetaAndData[]");
        }
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array>(get_class());
        }
    } // namespace ScenesManagerBehaviourUtility_SceneMetaAndData__Array
} // namespace app::classes::types
