#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XGameSaveUpdateHandle_1 {
        namespace {
            inline app::XGameSaveUpdateHandle_1__Class* type_info_ref = nullptr;
        }
        inline app::XGameSaveUpdateHandle_1__Class** type_info = &type_info_ref;
        inline app::XGameSaveUpdateHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveUpdateHandle_1__Class>(type_info, "XGamingRuntime.Interop", "XGameSaveUpdateHandle");
        }
        inline app::XGameSaveUpdateHandle_1* create() {
            return il2cpp::create_object<app::XGameSaveUpdateHandle_1>(get_class());
        }
        inline app::XGameSaveUpdateHandle_1__Boxed* box(app::XGameSaveUpdateHandle_1 value) {
            return il2cpp::box_value<app::XGameSaveUpdateHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XGameSaveUpdateHandle_1
} // namespace app::classes::types
