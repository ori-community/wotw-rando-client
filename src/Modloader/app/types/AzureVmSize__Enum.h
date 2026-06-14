#pragma once
#include <Modloader/app/structs/AzureVmSize__Enum.h>
#include <Modloader/app/structs/AzureVmSize__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AzureVmSize__Enum {
        inline app::AzureVmSize__Enum__Class** type_info() {
            static app::AzureVmSize__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AzureVmSize__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AzureVmSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::AzureVmSize__Enum__Class>(type_info(), "PlayFab.MultiplayerModels", "AzureVmSize");
        }
        inline app::AzureVmSize__Enum* create() {
            return il2cpp::create_object<app::AzureVmSize__Enum>(get_class());
        }
    } // namespace AzureVmSize__Enum
} // namespace app::classes::types
