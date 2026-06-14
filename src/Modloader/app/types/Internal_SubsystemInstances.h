#pragma once
#include <Modloader/app/structs/Internal_SubsystemInstances.h>
#include <Modloader/app/structs/Internal_SubsystemInstances__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Internal_SubsystemInstances {
        inline app::Internal_SubsystemInstances__Class** type_info() {
            static app::Internal_SubsystemInstances__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Internal_SubsystemInstances__Class**)(modloader::win::memory::resolve_rva(0x047022B0));
            }
            return cache;
        }
        inline app::Internal_SubsystemInstances__Class* get_class() {
            return il2cpp::get_class<app::Internal_SubsystemInstances__Class>(type_info(), "UnityEngine.Experimental", "Internal_SubsystemInstances");
        }
        inline app::Internal_SubsystemInstances* create() {
            return il2cpp::create_object<app::Internal_SubsystemInstances>(get_class());
        }
    } // namespace Internal_SubsystemInstances
} // namespace app::classes::types
