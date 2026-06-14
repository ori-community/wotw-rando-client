#pragma once
#include <Modloader/app/structs/HierarchyPerfTestsSceneRoot.h>
#include <Modloader/app/structs/HierarchyPerfTestsSceneRoot__Array.h>
#include <Modloader/app/structs/HierarchyPerfTestsSceneRoot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTestsSceneRoot {
        inline app::HierarchyPerfTestsSceneRoot__Class** type_info() {
            static app::HierarchyPerfTestsSceneRoot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyPerfTestsSceneRoot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyPerfTestsSceneRoot__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestsSceneRoot__Class>(type_info(), "HierarchyPerfTest", "HierarchyPerfTestsSceneRoot");
        }
        inline app::HierarchyPerfTestsSceneRoot* create() {
            return il2cpp::create_object<app::HierarchyPerfTestsSceneRoot>(get_class());
        }
        inline app::HierarchyPerfTestsSceneRoot__Array* create_array(int size) {
            return il2cpp::array_new<app::HierarchyPerfTestsSceneRoot__Array>(get_class(), size);
        }
        inline app::HierarchyPerfTestsSceneRoot__Array* create_array(const std::vector<app::HierarchyPerfTestsSceneRoot*>& items) {
            return il2cpp::array_new<app::HierarchyPerfTestsSceneRoot__Array>(get_class(), items);
        }
    } // namespace HierarchyPerfTestsSceneRoot
} // namespace app::classes::types
