#pragma once
#include <Modloader/app/structs/CrossSceneDependency__Array.h>
#include <Modloader/app/structs/CrossSceneDependency__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependency__Array {
        inline app::CrossSceneDependency__Array__Class** type_info() {
            static app::CrossSceneDependency__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneDependency__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneDependency__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependency__Array__Class>(type_info(), "Moon", "CrossSceneDependency[]");
        }
        inline app::CrossSceneDependency__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependency__Array>(get_class());
        }
    } // namespace CrossSceneDependency__Array
} // namespace app::classes::types
