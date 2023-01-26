#pragma once
#include <Modloader/app/structs/XGameSaveUpdateHandle_1.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle_1__Boxed.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveUpdateHandle_1 {
        inline app::XGameSaveUpdateHandle_1__Class** type_info() {
            static app::XGameSaveUpdateHandle_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XGameSaveUpdateHandle_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XGameSaveUpdateHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveUpdateHandle_1__Class>(type_info(), "XGamingRuntime.Interop", "XGameSaveUpdateHandle");
        }
        inline app::XGameSaveUpdateHandle_1* create() {
            return il2cpp::create_object<app::XGameSaveUpdateHandle_1>(get_class());
        }
        inline app::XGameSaveUpdateHandle_1__Boxed* box(app::XGameSaveUpdateHandle_1 value) {
            return il2cpp::box_value<app::XGameSaveUpdateHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XGameSaveUpdateHandle_1
} // namespace app::classes::types
