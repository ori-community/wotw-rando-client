#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSample__Array {
        namespace {
            app::SceneSample__Array__Class* type_info_ref = nullptr;
        }
        app::SceneSample__Array__Class** type_info = &type_info_ref;
        inline app::SceneSample__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneSample__Array__Class>(type_info, "Moon.HierarchyPerformanceTest", "SceneSample[]");
        }
        inline app::SceneSample__Array* create() {
            return il2cpp::create_object<app::SceneSample__Array>(get_class());
        }
    } // namespace SceneSample__Array
} // namespace app::classes::types
