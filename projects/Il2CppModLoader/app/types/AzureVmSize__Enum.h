#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AzureVmSize__Enum {
        namespace {
            app::AzureVmSize__Enum__Class* type_info_ref = nullptr;
        }
        app::AzureVmSize__Enum__Class** type_info = &type_info_ref;
        inline app::AzureVmSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::AzureVmSize__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "AzureVmSize");
        }
        inline app::AzureVmSize__Enum* create() {
            return il2cpp::create_object<app::AzureVmSize__Enum>(get_class());
        }
    } // namespace AzureVmSize__Enum
} // namespace app::classes::types
