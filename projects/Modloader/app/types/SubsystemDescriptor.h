#pragma once
#include <Modloader/app/structs/SubsystemDescriptor.h>
#include <Modloader/app/structs/SubsystemDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubsystemDescriptor {
        inline app::SubsystemDescriptor__Class** type_info() {
            static app::SubsystemDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SubsystemDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SubsystemDescriptor__Class* get_class() {
            return il2cpp::get_class<app::SubsystemDescriptor__Class>(type_info(), "UnityEngine.Experimental", "SubsystemDescriptor");
        }
        inline app::SubsystemDescriptor* create() {
            return il2cpp::create_object<app::SubsystemDescriptor>(get_class());
        }
    } // namespace SubsystemDescriptor
} // namespace app::classes::types
