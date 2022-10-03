#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourUtility_SceneMetaAndData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class** type_info;
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class>(type_info, "", "ScenesManagerBehaviourUtility", "SceneMetaAndData");
        }
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourUtility_SceneMetaAndData>(get_class());
        }
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Boxed* box(app::ScenesManagerBehaviourUtility_SceneMetaAndData value) {
            return il2cpp::box_value<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Boxed>(get_class(), value);
        }
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array* create_array(int size) {
            return il2cpp::array_new<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array>(get_class(), size);
        }
    } // namespace ScenesManagerBehaviourUtility_SceneMetaAndData
} // namespace app::classes::types
