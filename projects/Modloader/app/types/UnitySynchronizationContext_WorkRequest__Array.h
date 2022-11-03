#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnitySynchronizationContext_WorkRequest__Array {
        namespace {
            inline app::UnitySynchronizationContext_WorkRequest__Array__Class* type_info_ref = nullptr;
        }
        inline app::UnitySynchronizationContext_WorkRequest__Array__Class** type_info = &type_info_ref;
        inline app::UnitySynchronizationContext_WorkRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::UnitySynchronizationContext_WorkRequest__Array__Class>(type_info, "UnityEngine", "UnitySynchronizationContext+WorkRequest[]");
        }
        inline app::UnitySynchronizationContext_WorkRequest__Array* create() {
            return il2cpp::create_object<app::UnitySynchronizationContext_WorkRequest__Array>(get_class());
        }
    } // namespace UnitySynchronizationContext_WorkRequest__Array
} // namespace app::classes::types
