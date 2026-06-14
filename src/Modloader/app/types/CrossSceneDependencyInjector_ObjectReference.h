#pragma once
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference.h>
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference__Array.h>
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyInjector_ObjectReference {
        inline app::CrossSceneDependencyInjector_ObjectReference__Class** type_info() {
            static app::CrossSceneDependencyInjector_ObjectReference__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneDependencyInjector_ObjectReference__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneDependencyInjector_ObjectReference__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossSceneDependencyInjector_ObjectReference__Class>(type_info(), "Moon", "CrossSceneDependencyInjector", "ObjectReference");
        }
        inline app::CrossSceneDependencyInjector_ObjectReference* create() {
            return il2cpp::create_object<app::CrossSceneDependencyInjector_ObjectReference>(get_class());
        }
        inline app::CrossSceneDependencyInjector_ObjectReference__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneDependencyInjector_ObjectReference__Array>(get_class(), size);
        }
        inline app::CrossSceneDependencyInjector_ObjectReference__Array* create_array(const std::vector<app::CrossSceneDependencyInjector_ObjectReference*>& items) {
            return il2cpp::array_new<app::CrossSceneDependencyInjector_ObjectReference__Array>(get_class(), items);
        }
    } // namespace CrossSceneDependencyInjector_ObjectReference
} // namespace app::classes::types
