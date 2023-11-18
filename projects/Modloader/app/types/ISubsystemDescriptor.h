#pragma once
#include <Modloader/app/structs/ISubsystemDescriptor.h>
#include <Modloader/app/structs/ISubsystemDescriptor__Array.h>
#include <Modloader/app/structs/ISubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISubsystemDescriptor {
        inline app::ISubsystemDescriptor__Class** type_info() {
            static app::ISubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ISubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental", "ISubsystemDescriptor");
        }
        inline app::ISubsystemDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::ISubsystemDescriptor__Array>(get_class(), size);
        }
        inline app::ISubsystemDescriptor__Array* create_array(const std::vector<app::ISubsystemDescriptor*>& items) {
            return il2cpp::array_new<app::ISubsystemDescriptor__Array>(get_class(), items);
        }
    } // namespace ISubsystemDescriptor
} // namespace app::classes::types
