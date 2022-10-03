#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AzureRegion__Enum__Array {
        namespace {
            app::AzureRegion__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::AzureRegion__Enum__Array__Class** type_info = &type_info_ref;
        inline app::AzureRegion__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::AzureRegion__Enum__Array__Class>(type_info, "PlayFab.MultiplayerModels", "AzureRegion[]");
        }
        inline app::AzureRegion__Enum__Array* create() {
            return il2cpp::create_object<app::AzureRegion__Enum__Array>(get_class());
        }
    } // namespace AzureRegion__Enum__Array
} // namespace app::classes::types
