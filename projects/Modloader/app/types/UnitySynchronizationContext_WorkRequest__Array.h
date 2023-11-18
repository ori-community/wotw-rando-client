#pragma once
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest__Array.h>
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnitySynchronizationContext_WorkRequest__Array {
        inline app::UnitySynchronizationContext_WorkRequest__Array__Class** type_info() {
            static app::UnitySynchronizationContext_WorkRequest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnitySynchronizationContext_WorkRequest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnitySynchronizationContext_WorkRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::UnitySynchronizationContext_WorkRequest__Array__Class>(type_info(), "UnityEngine", "UnitySynchronizationContext+WorkRequest[]");
        }
        inline app::UnitySynchronizationContext_WorkRequest__Array* create() {
            return il2cpp::create_object<app::UnitySynchronizationContext_WorkRequest__Array>(get_class());
        }
    } // namespace UnitySynchronizationContext_WorkRequest__Array
} // namespace app::classes::types
