#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyInjector_ObjectReference__Array {
        namespace {
            app::CrossSceneDependencyInjector_ObjectReference__Array__Class* type_info_ref = nullptr;
        }
        app::CrossSceneDependencyInjector_ObjectReference__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependencyInjector_ObjectReference__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyInjector_ObjectReference__Array__Class>(type_info, "Moon", "CrossSceneDependencyInjector+ObjectReference[]");
        }
        inline app::CrossSceneDependencyInjector_ObjectReference__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependencyInjector_ObjectReference__Array>(get_class());
        }
    } // namespace CrossSceneDependencyInjector_ObjectReference__Array
} // namespace app::classes::types
