#pragma once
#include <Modloader/app/structs/EarlyUpdate_GpuTimestamp.h>
#include <Modloader/app/structs/EarlyUpdate_GpuTimestamp__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_GpuTimestamp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_GpuTimestamp {
        inline app::EarlyUpdate_GpuTimestamp__Class** type_info() {
            static app::EarlyUpdate_GpuTimestamp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_GpuTimestamp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_GpuTimestamp__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_GpuTimestamp__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "GpuTimestamp");
        }
        inline app::EarlyUpdate_GpuTimestamp* create() {
            return il2cpp::create_object<app::EarlyUpdate_GpuTimestamp>(get_class());
        }
        inline app::EarlyUpdate_GpuTimestamp__Boxed* box(app::EarlyUpdate_GpuTimestamp value) {
            return il2cpp::box_value<app::EarlyUpdate_GpuTimestamp__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_GpuTimestamp
} // namespace app::classes::types
