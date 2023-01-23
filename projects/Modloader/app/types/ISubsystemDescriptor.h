#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISubsystemDescriptor__Class.h>
#include <Modloader/app/structs/ISubsystemDescriptor__Array.h>
#include <Modloader/app/structs/ISubsystemDescriptor.h>

namespace app::classes::types {
    namespace ISubsystemDescriptor {
        namespace {
            inline app::ISubsystemDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::ISubsystemDescriptor__Class** type_info = &type_info_ref;
        inline app::ISubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ISubsystemDescriptor__Class>(type_info, "UnityEngine.Experimental", "ISubsystemDescriptor");
        }
        inline app::ISubsystemDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::ISubsystemDescriptor__Array>(get_class(), size);
        }
        inline app::ISubsystemDescriptor__Array* create_array(const std::vector<app::ISubsystemDescriptor*>& items) {
            return il2cpp::array_new<app::ISubsystemDescriptor__Array>(get_class(), items);
        }
    } // namespace ISubsystemDescriptor
} // namespace app::classes::types
