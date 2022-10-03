#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveContainerHandle_1 {
        namespace {
            app::XGameSaveContainerHandle_1__Class* type_info_ref = nullptr;
        }
        app::XGameSaveContainerHandle_1__Class** type_info = &type_info_ref;
        inline app::XGameSaveContainerHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveContainerHandle_1__Class>(type_info, "XGamingRuntime.Interop", "XGameSaveContainerHandle");
        }
        inline app::XGameSaveContainerHandle_1* create() {
            return il2cpp::create_object<app::XGameSaveContainerHandle_1>(get_class());
        }
        inline app::XGameSaveContainerHandle_1__Boxed* box(app::XGameSaveContainerHandle_1 value) {
            return il2cpp::box_value<app::XGameSaveContainerHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XGameSaveContainerHandle_1
} // namespace app::classes::types
