#pragma once
#include <Modloader/app/structs/HierarchyPerfTestComp_AllUnityCallbacks.h>
#include <Modloader/app/structs/HierarchyPerfTestComp_AllUnityCallbacks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTestComp_AllUnityCallbacks {
        inline app::HierarchyPerfTestComp_AllUnityCallbacks__Class** type_info() {
            static app::HierarchyPerfTestComp_AllUnityCallbacks__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyPerfTestComp_AllUnityCallbacks__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyPerfTestComp_AllUnityCallbacks__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestComp_AllUnityCallbacks__Class>(type_info(), "HierarchyPerfTest", "HierarchyPerfTestComp_AllUnityCallbacks");
        }
        inline app::HierarchyPerfTestComp_AllUnityCallbacks* create() {
            return il2cpp::create_object<app::HierarchyPerfTestComp_AllUnityCallbacks>(get_class());
        }
    } // namespace HierarchyPerfTestComp_AllUnityCallbacks
} // namespace app::classes::types
