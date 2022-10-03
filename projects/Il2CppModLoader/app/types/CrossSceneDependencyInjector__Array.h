#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyInjector__Array {
        namespace {
            app::CrossSceneDependencyInjector__Array__Class* type_info_ref = nullptr;
        }
        app::CrossSceneDependencyInjector__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependencyInjector__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyInjector__Array__Class>(type_info, "Moon", "CrossSceneDependencyInjector[]");
        }
        inline app::CrossSceneDependencyInjector__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependencyInjector__Array>(get_class());
        }
    } // namespace CrossSceneDependencyInjector__Array
} // namespace app::classes::types
