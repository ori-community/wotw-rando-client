#pragma once
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Array.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Boxed.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourUtility_SceneMetaAndData {
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class** type_info() {
            static app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class**)(modloader::win::memory::resolve_rva(0x0476FC50));
            }
            return cache;
        }
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class>(type_info(), "", "ScenesManagerBehaviourUtility", "SceneMetaAndData");
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
        inline app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array* create_array(const std::vector<app::ScenesManagerBehaviourUtility_SceneMetaAndData>& items) {
            return il2cpp::array_new<app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array>(get_class(), items);
        }
    } // namespace ScenesManagerBehaviourUtility_SceneMetaAndData
} // namespace app::classes::types
