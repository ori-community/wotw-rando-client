#pragma once
#include <Modloader/app/structs/SceneTestData__Array.h>
#include <Modloader/app/structs/SceneTestData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneTestData__Array {
        inline app::SceneTestData__Array__Class** type_info() {
            static app::SceneTestData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneTestData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneTestData__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneTestData__Array__Class>(type_info(), "Moon.HierarchyPerformanceTest", "SceneTestData[]");
        }
        inline app::SceneTestData__Array* create() {
            return il2cpp::create_object<app::SceneTestData__Array>(get_class());
        }
    } // namespace SceneTestData__Array
} // namespace app::classes::types
