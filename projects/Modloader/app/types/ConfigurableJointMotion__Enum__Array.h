#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigurableJointMotion__Enum__Array {
        inline app::ConfigurableJointMotion__Enum__Array__Class** type_info = (app::ConfigurableJointMotion__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x047223E0));
        inline app::ConfigurableJointMotion__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJointMotion__Enum__Array__Class>(type_info, "UnityEngine", "ConfigurableJointMotion[]");
        }
        inline app::ConfigurableJointMotion__Enum__Array* create() {
            return il2cpp::create_object<app::ConfigurableJointMotion__Enum__Array>(get_class());
        }
    } // namespace ConfigurableJointMotion__Enum__Array
} // namespace app::classes::types
