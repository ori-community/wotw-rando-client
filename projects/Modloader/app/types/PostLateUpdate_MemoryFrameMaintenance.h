#pragma once
#include <Modloader/app/structs/PostLateUpdate_MemoryFrameMaintenance.h>
#include <Modloader/app/structs/PostLateUpdate_MemoryFrameMaintenance__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_MemoryFrameMaintenance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_MemoryFrameMaintenance {
        inline app::PostLateUpdate_MemoryFrameMaintenance__Class** type_info() {
            static app::PostLateUpdate_MemoryFrameMaintenance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_MemoryFrameMaintenance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_MemoryFrameMaintenance__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_MemoryFrameMaintenance__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "MemoryFrameMaintenance");
        }
        inline app::PostLateUpdate_MemoryFrameMaintenance* create() {
            return il2cpp::create_object<app::PostLateUpdate_MemoryFrameMaintenance>(get_class());
        }
        inline app::PostLateUpdate_MemoryFrameMaintenance__Boxed* box(app::PostLateUpdate_MemoryFrameMaintenance value) {
            return il2cpp::box_value<app::PostLateUpdate_MemoryFrameMaintenance__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_MemoryFrameMaintenance
} // namespace app::classes::types
