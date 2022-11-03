#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyPerfTestComp_AllUnityCallbacks {
        namespace {
            inline app::HierarchyPerfTestComp_AllUnityCallbacks__Class* type_info_ref = nullptr;
        }
        inline app::HierarchyPerfTestComp_AllUnityCallbacks__Class** type_info = &type_info_ref;
        inline app::HierarchyPerfTestComp_AllUnityCallbacks__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestComp_AllUnityCallbacks__Class>(type_info, "HierarchyPerfTest", "HierarchyPerfTestComp_AllUnityCallbacks");
        }
        inline app::HierarchyPerfTestComp_AllUnityCallbacks* create() {
            return il2cpp::create_object<app::HierarchyPerfTestComp_AllUnityCallbacks>(get_class());
        }
    } // namespace HierarchyPerfTestComp_AllUnityCallbacks
} // namespace app::classes::types
