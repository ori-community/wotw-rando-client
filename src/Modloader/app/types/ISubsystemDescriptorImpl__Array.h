#pragma once
#include <Modloader/app/structs/ISubsystemDescriptorImpl__Array.h>
#include <Modloader/app/structs/ISubsystemDescriptorImpl__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISubsystemDescriptorImpl__Array {
        inline app::ISubsystemDescriptorImpl__Array__Class** type_info() {
            static app::ISubsystemDescriptorImpl__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISubsystemDescriptorImpl__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISubsystemDescriptorImpl__Array__Class* get_class() {
            return il2cpp::get_class<app::ISubsystemDescriptorImpl__Array__Class>(type_info(), "UnityEngine.Experimental", "ISubsystemDescriptorImpl[]");
        }
        inline app::ISubsystemDescriptorImpl__Array* create() {
            return il2cpp::create_object<app::ISubsystemDescriptorImpl__Array>(get_class());
        }
    } // namespace ISubsystemDescriptorImpl__Array
} // namespace app::classes::types
