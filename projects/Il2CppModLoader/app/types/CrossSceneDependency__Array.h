#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependency__Array {
        namespace {
            app::CrossSceneDependency__Array__Class* type_info_ref = nullptr;
        }
        app::CrossSceneDependency__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependency__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependency__Array__Class>(type_info, "Moon", "CrossSceneDependency[]");
        }
        inline app::CrossSceneDependency__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependency__Array>(get_class());
        }
    } // namespace CrossSceneDependency__Array
} // namespace app::classes::types
