#pragma once
#include <Modloader/app/structs/ConfigurableJointMotion__Enum__Array.h>
#include <Modloader/app/structs/ConfigurableJointMotion__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurableJointMotion__Enum__Array {
        inline app::ConfigurableJointMotion__Enum__Array__Class** type_info() {
            static app::ConfigurableJointMotion__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConfigurableJointMotion__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x047223E0));
            }
            return cache;
        }
        inline app::ConfigurableJointMotion__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJointMotion__Enum__Array__Class>(type_info(), "UnityEngine", "ConfigurableJointMotion[]");
        }
        inline app::ConfigurableJointMotion__Enum__Array* create() {
            return il2cpp::create_object<app::ConfigurableJointMotion__Enum__Array>(get_class());
        }
    } // namespace ConfigurableJointMotion__Enum__Array
} // namespace app::classes::types
