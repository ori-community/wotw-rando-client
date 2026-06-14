#pragma once
#include <Modloader/app/structs/ConfigurableJoint__Array.h>
#include <Modloader/app/structs/ConfigurableJoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurableJoint__Array {
        inline app::ConfigurableJoint__Array__Class** type_info() {
            static app::ConfigurableJoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConfigurableJoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04759980));
            }
            return cache;
        }
        inline app::ConfigurableJoint__Array__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJoint__Array__Class>(type_info(), "UnityEngine", "ConfigurableJoint[]");
        }
        inline app::ConfigurableJoint__Array* create() {
            return il2cpp::create_object<app::ConfigurableJoint__Array>(get_class());
        }
    } // namespace ConfigurableJoint__Array
} // namespace app::classes::types
