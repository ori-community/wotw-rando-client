#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IntegratedSubsystemDescriptor__Class.h>
#include <Modloader/app/structs/IntegratedSubsystemDescriptor.h>

namespace app::classes::types {
    namespace IntegratedSubsystemDescriptor {
        namespace {
            inline app::IntegratedSubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::IntegratedSubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::IntegratedSubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IntegratedSubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental", "IntegratedSubsystemDescriptor");
        }
        inline app::IntegratedSubsystemDescriptor* create() {
            return il2cpp::create_object<app::IntegratedSubsystemDescriptor>(get_class());
        }
    } // namespace IntegratedSubsystemDescriptor
} // namespace app::classes::types
