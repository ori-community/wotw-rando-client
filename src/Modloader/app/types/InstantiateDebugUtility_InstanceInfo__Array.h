#pragma once
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Array.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility_InstanceInfo__Array {
        inline app::InstantiateDebugUtility_InstanceInfo__Array__Class** type_info() {
            static app::InstantiateDebugUtility_InstanceInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiateDebugUtility_InstanceInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiateDebugUtility_InstanceInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::InstantiateDebugUtility_InstanceInfo__Array__Class>(type_info(), "InstantiateDebug", "InstantiateDebugUtility+InstanceInfo[]");
        }
        inline app::InstantiateDebugUtility_InstanceInfo__Array* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility_InstanceInfo__Array>(get_class());
        }
    } // namespace InstantiateDebugUtility_InstanceInfo__Array
} // namespace app::classes::types
