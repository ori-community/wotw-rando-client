#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntegratedSubsystemDescriptor {
        namespace {
            app::IntegratedSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        app::IntegratedSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::IntegratedSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IntegratedSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental", "IntegratedSubsystemDescriptor");
        }
        inline app::IntegratedSubsystemDescriptor* create() {
            return il2cpp::create_object<app::IntegratedSubsystemDescriptor>(get_class());
        }
    } // namespace IntegratedSubsystemDescriptor
} // namespace app::classes::types
