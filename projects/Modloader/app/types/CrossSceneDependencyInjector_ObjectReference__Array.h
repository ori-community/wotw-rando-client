#pragma once
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference__Array.h>
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyInjector_ObjectReference__Array {
        inline app::CrossSceneDependencyInjector_ObjectReference__Array__Class** type_info() {
            static app::CrossSceneDependencyInjector_ObjectReference__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneDependencyInjector_ObjectReference__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneDependencyInjector_ObjectReference__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyInjector_ObjectReference__Array__Class>(type_info(), "Moon", "CrossSceneDependencyInjector+ObjectReference[]");
        }
        inline app::CrossSceneDependencyInjector_ObjectReference__Array* create() {
            return il2cpp::create_object<app::CrossSceneDependencyInjector_ObjectReference__Array>(get_class());
        }
    } // namespace CrossSceneDependencyInjector_ObjectReference__Array
} // namespace app::classes::types
