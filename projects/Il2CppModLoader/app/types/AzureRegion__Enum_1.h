#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AzureRegion__Enum_1 {
        namespace {
            app::AzureRegion__Enum_1__Class* type_info_ref = nullptr;
        }
        app::AzureRegion__Enum_1__Class** type_info = &type_info_ref;
        inline app::AzureRegion__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::AzureRegion__Enum_1__Class>(type_info, "PlayFab.PlayStreamModels", "AzureRegion");
        }
        inline app::AzureRegion__Enum_1* create() {
            return il2cpp::create_object<app::AzureRegion__Enum_1>(get_class());
        }
        inline app::AzureRegion__Enum_1__Array* create_array(int size) {
            return il2cpp::array_new<app::AzureRegion__Enum_1__Array>(get_class(), size);
        }
        inline app::AzureRegion__Enum_1__Array* create_array(const std::vector<app::AzureRegion__Enum_1__Boxed*>& items) {
            return il2cpp::array_new<app::AzureRegion__Enum_1__Array>(get_class(), items);
        }
    } // namespace AzureRegion__Enum_1
} // namespace app::classes::types
