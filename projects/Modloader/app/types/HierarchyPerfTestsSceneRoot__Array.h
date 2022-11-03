#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchyPerfTestsSceneRoot__Array {
        namespace {
            inline app::HierarchyPerfTestsSceneRoot__Array__Class* type_info_ref = nullptr;
        }
        inline app::HierarchyPerfTestsSceneRoot__Array__Class** type_info = &type_info_ref;
        inline app::HierarchyPerfTestsSceneRoot__Array__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestsSceneRoot__Array__Class>(type_info, "HierarchyPerfTest", "HierarchyPerfTestsSceneRoot[]");
        }
        inline app::HierarchyPerfTestsSceneRoot__Array* create() {
            return il2cpp::create_object<app::HierarchyPerfTestsSceneRoot__Array>(get_class());
        }
    } // namespace HierarchyPerfTestsSceneRoot__Array
} // namespace app::classes::types
