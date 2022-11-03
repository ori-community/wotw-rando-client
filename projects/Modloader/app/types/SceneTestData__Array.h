#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneTestData__Array {
        namespace {
            inline app::SceneTestData__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneTestData__Array__Class** type_info = &type_info_ref;
        inline app::SceneTestData__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneTestData__Array__Class>(type_info, "Moon.HierarchyPerformanceTest", "SceneTestData[]");
        }
        inline app::SceneTestData__Array* create() {
            return il2cpp::create_object<app::SceneTestData__Array>(get_class());
        }
    } // namespace SceneTestData__Array
} // namespace app::classes::types
