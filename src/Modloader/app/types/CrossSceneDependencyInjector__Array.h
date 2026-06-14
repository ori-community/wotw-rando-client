#pragma once
#include <Modloader/app/structs/CrossSceneDependencyInjector__Array.h>
#include <Modloader/app/structs/CrossSceneDependencyInjector__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyInjector__Array {
        inline app::CrossSceneDependencyInjector__Array__Class** type_info() {
            static app::CrossSceneDependencyInjector__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneDependencyInjector__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneDependencyInjector__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyInjector__Array__Class>(type_info(), "Moon", "CrossSceneDependencyInjector[]");
        }
        inline app::CrossSceneDependencyInjector__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependencyInjector__Array>(get_class());
        }
    } // namespace CrossSceneDependencyInjector__Array
} // namespace app::classes::types
