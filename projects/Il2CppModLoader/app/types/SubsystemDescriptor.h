#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubsystemDescriptor {
        namespace {
            inline app::SubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::SubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::SubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::SubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental", "SubsystemDescriptor");
        }
        inline app::SubsystemDescriptor* create() {
            return il2cpp::create_object<app::SubsystemDescriptor>(get_class());
        }
    } // namespace SubsystemDescriptor
} // namespace app::classes::types
