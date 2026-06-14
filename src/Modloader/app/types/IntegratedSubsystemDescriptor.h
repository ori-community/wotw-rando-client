#pragma once
#include <Modloader/app/structs/IntegratedSubsystemDescriptor.h>
#include <Modloader/app/structs/IntegratedSubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntegratedSubsystemDescriptor {
        inline app::IntegratedSubsystemDescriptor__Class** type_info() {
            static app::IntegratedSubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntegratedSubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntegratedSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IntegratedSubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental", "IntegratedSubsystemDescriptor");
        }
        inline app::IntegratedSubsystemDescriptor* create() {
            return il2cpp::create_object<app::IntegratedSubsystemDescriptor>(get_class());
        }
    } // namespace IntegratedSubsystemDescriptor
} // namespace app::classes::types
