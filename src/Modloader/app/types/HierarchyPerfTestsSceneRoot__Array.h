#pragma once
#include <Modloader/app/structs/HierarchyPerfTestsSceneRoot__Array.h>
#include <Modloader/app/structs/HierarchyPerfTestsSceneRoot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTestsSceneRoot__Array {
        inline app::HierarchyPerfTestsSceneRoot__Array__Class** type_info() {
            static app::HierarchyPerfTestsSceneRoot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyPerfTestsSceneRoot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyPerfTestsSceneRoot__Array__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestsSceneRoot__Array__Class>(type_info(), "HierarchyPerfTest", "HierarchyPerfTestsSceneRoot[]");
        }
        inline app::HierarchyPerfTestsSceneRoot__Array* create() {
            return il2cpp::create_object<app::HierarchyPerfTestsSceneRoot__Array>(get_class());
        }
    } // namespace HierarchyPerfTestsSceneRoot__Array
} // namespace app::classes::types
