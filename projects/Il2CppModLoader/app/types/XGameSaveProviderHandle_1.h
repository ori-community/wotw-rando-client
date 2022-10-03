#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveProviderHandle_1 {
        namespace {
            app::XGameSaveProviderHandle_1__Class* type_info_ref = nullptr;
        }
        app::XGameSaveProviderHandle_1__Class** type_info = &type_info_ref;
        inline app::XGameSaveProviderHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveProviderHandle_1__Class>(type_info, "XGamingRuntime.Interop", "XGameSaveProviderHandle");
        }
        inline app::XGameSaveProviderHandle_1* create() {
            return il2cpp::create_object<app::XGameSaveProviderHandle_1>(get_class());
        }
        inline app::XGameSaveProviderHandle_1__Boxed* box(app::XGameSaveProviderHandle_1 value) {
            return il2cpp::box_value<app::XGameSaveProviderHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XGameSaveProviderHandle_1
} // namespace app::classes::types
