#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTestsSceneRoot__Array {
        namespace {
            app::HierarchyPerfTestsSceneRoot__Array__Class* type_info_ref = nullptr;
        }
        app::HierarchyPerfTestsSceneRoot__Array__Class** type_info = &type_info_ref;
        inline app::HierarchyPerfTestsSceneRoot__Array__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestsSceneRoot__Array__Class>(type_info, "HierarchyPerfTest", "HierarchyPerfTestsSceneRoot[]");
        }
        inline app::HierarchyPerfTestsSceneRoot__Array* create() {
            return il2cpp::create_object<app::HierarchyPerfTestsSceneRoot__Array>(get_class());
        }
    } // namespace HierarchyPerfTestsSceneRoot__Array
} // namespace app::classes::types
