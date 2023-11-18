#pragma once
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/ConfigurableJoint__Array.h>
#include <Modloader/app/structs/ConfigurableJoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfigurableJoint {
        inline app::ConfigurableJoint__Class** type_info() {
            static app::ConfigurableJoint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConfigurableJoint__Class**)(modloader::win::memory::resolve_rva(0x04752560));
            }
            return cache;
        }
        inline app::ConfigurableJoint__Class* get_class() {
            return il2cpp::get_class<app::ConfigurableJoint__Class>(type_info(), "UnityEngine", "ConfigurableJoint");
        }
        inline app::ConfigurableJoint* create() {
            return il2cpp::create_object<app::ConfigurableJoint>(get_class());
        }
        inline app::ConfigurableJoint__Array* create_array(int size) {
            return il2cpp::array_new<app::ConfigurableJoint__Array>(get_class(), size);
        }
        inline app::ConfigurableJoint__Array* create_array(const std::vector<app::ConfigurableJoint*>& items) {
            return il2cpp::array_new<app::ConfigurableJoint__Array>(get_class(), items);
        }
    } // namespace ConfigurableJoint
} // namespace app::classes::types
