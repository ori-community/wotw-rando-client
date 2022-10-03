#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISubsystemDescriptorImpl__Array {
        namespace {
            app::ISubsystemDescriptorImpl__Array__Class* type_info_ref = nullptr;
        }
        app::ISubsystemDescriptorImpl__Array__Class** type_info = &type_info_ref;
        inline app::ISubsystemDescriptorImpl__Array__Class* get_class() {
            return il2cpp::get_class<app::ISubsystemDescriptorImpl__Array__Class>(type_info, "UnityEngine.Experimental", "ISubsystemDescriptorImpl[]");
        }
        inline app::ISubsystemDescriptorImpl__Array* create() {
            return il2cpp::create_object<app::ISubsystemDescriptorImpl__Array>(get_class());
        }
    } // namespace ISubsystemDescriptorImpl__Array
} // namespace app::classes::types
