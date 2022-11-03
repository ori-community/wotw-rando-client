#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility_InstanceInfo__Array {
        namespace {
            inline app::InstantiateDebugUtility_InstanceInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::InstantiateDebugUtility_InstanceInfo__Array__Class** type_info = &type_info_ref;
        inline app::InstantiateDebugUtility_InstanceInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::InstantiateDebugUtility_InstanceInfo__Array__Class>(type_info, "InstantiateDebug", "InstantiateDebugUtility+InstanceInfo[]");
        }
        inline app::InstantiateDebugUtility_InstanceInfo__Array* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility_InstanceInfo__Array>(get_class());
        }
    } // namespace InstantiateDebugUtility_InstanceInfo__Array
} // namespace app::classes::types
