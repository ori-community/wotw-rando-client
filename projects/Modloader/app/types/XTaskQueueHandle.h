#pragma once
#include <Modloader/app/structs/XTaskQueueHandle.h>
#include <Modloader/app/structs/XTaskQueueHandle__Boxed.h>
#include <Modloader/app/structs/XTaskQueueHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XTaskQueueHandle {
        inline app::XTaskQueueHandle__Class** type_info() {
            static app::XTaskQueueHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XTaskQueueHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XTaskQueueHandle__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueueHandle__Class>(type_info(), "XGamingRuntime.Interop", "XTaskQueueHandle");
        }
        inline app::XTaskQueueHandle* create() {
            return il2cpp::create_object<app::XTaskQueueHandle>(get_class());
        }
        inline app::XTaskQueueHandle__Boxed* box(app::XTaskQueueHandle value) {
            return il2cpp::box_value<app::XTaskQueueHandle__Boxed>(get_class(), value);
        }
    } // namespace XTaskQueueHandle
} // namespace app::classes::types
