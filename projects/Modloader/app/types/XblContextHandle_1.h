#pragma once
#include <Modloader/app/structs/XblContextHandle_1.h>
#include <Modloader/app/structs/XblContextHandle_1__Boxed.h>
#include <Modloader/app/structs/XblContextHandle_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblContextHandle_1 {
        inline app::XblContextHandle_1__Class** type_info() {
            static app::XblContextHandle_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblContextHandle_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblContextHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XblContextHandle_1__Class>(type_info(), "XGamingRuntime.Interop", "XblContextHandle");
        }
        inline app::XblContextHandle_1* create() {
            return il2cpp::create_object<app::XblContextHandle_1>(get_class());
        }
        inline app::XblContextHandle_1__Boxed* box(app::XblContextHandle_1 value) {
            return il2cpp::box_value<app::XblContextHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XblContextHandle_1
} // namespace app::classes::types
