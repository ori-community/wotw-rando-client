#pragma once
#include <Modloader/app/structs/XUserHandle_1.h>
#include <Modloader/app/structs/XUserHandle_1__Boxed.h>
#include <Modloader/app/structs/XUserHandle_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserHandle_1 {
        inline app::XUserHandle_1__Class** type_info() {
            static app::XUserHandle_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XUserHandle_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XUserHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XUserHandle_1__Class>(type_info(), "XGamingRuntime.Interop", "XUserHandle");
        }
        inline app::XUserHandle_1* create() {
            return il2cpp::create_object<app::XUserHandle_1>(get_class());
        }
        inline app::XUserHandle_1__Boxed* box(app::XUserHandle_1 value) {
            return il2cpp::box_value<app::XUserHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XUserHandle_1
} // namespace app::classes::types
