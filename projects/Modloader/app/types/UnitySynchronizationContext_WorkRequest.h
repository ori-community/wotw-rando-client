#pragma once
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest.h>
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest__Array.h>
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest__Boxed.h>
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnitySynchronizationContext_WorkRequest {
        inline app::UnitySynchronizationContext_WorkRequest__Class** type_info() {
            static app::UnitySynchronizationContext_WorkRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnitySynchronizationContext_WorkRequest__Class**)(modloader::win::memory::resolve_rva(0x04719A10));
            }
            return cache;
        }
        inline app::UnitySynchronizationContext_WorkRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::UnitySynchronizationContext_WorkRequest__Class>(type_info(), "UnityEngine", "UnitySynchronizationContext", "WorkRequest");
        }
        inline app::UnitySynchronizationContext_WorkRequest* create() {
            return il2cpp::create_object<app::UnitySynchronizationContext_WorkRequest>(get_class());
        }
        inline app::UnitySynchronizationContext_WorkRequest__Boxed* box(app::UnitySynchronizationContext_WorkRequest value) {
            return il2cpp::box_value<app::UnitySynchronizationContext_WorkRequest__Boxed>(get_class(), value);
        }
        inline app::UnitySynchronizationContext_WorkRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::UnitySynchronizationContext_WorkRequest__Array>(get_class(), size);
        }
        inline app::UnitySynchronizationContext_WorkRequest__Array* create_array(const std::vector<app::UnitySynchronizationContext_WorkRequest>& items) {
            return il2cpp::array_new<app::UnitySynchronizationContext_WorkRequest__Array>(get_class(), items);
        }
    } // namespace UnitySynchronizationContext_WorkRequest
} // namespace app::classes::types
