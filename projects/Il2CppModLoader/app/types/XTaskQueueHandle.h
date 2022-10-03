#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XTaskQueueHandle {
        namespace {
            app::XTaskQueueHandle__Class* type_info_ref = nullptr;
        }
        app::XTaskQueueHandle__Class** type_info = &type_info_ref;
        inline app::XTaskQueueHandle__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueueHandle__Class>(type_info, "XGamingRuntime.Interop", "XTaskQueueHandle");
        }
        inline app::XTaskQueueHandle* create() {
            return il2cpp::create_object<app::XTaskQueueHandle>(get_class());
        }
        inline app::XTaskQueueHandle__Boxed* box(app::XTaskQueueHandle value) {
            return il2cpp::box_value<app::XTaskQueueHandle__Boxed>(get_class(), value);
        }
    } // namespace XTaskQueueHandle
} // namespace app::classes::types
