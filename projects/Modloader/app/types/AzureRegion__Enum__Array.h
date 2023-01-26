#pragma once
#include <Modloader/app/structs/AzureRegion__Enum__Array.h>
#include <Modloader/app/structs/AzureRegion__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AzureRegion__Enum__Array {
        inline app::AzureRegion__Enum__Array__Class** type_info() {
            static app::AzureRegion__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AzureRegion__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AzureRegion__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::AzureRegion__Enum__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "AzureRegion[]");
        }
        inline app::AzureRegion__Enum__Array* create() {
            return il2cpp::create_object<app::AzureRegion__Enum__Array>(get_class());
        }
    } // namespace AzureRegion__Enum__Array
} // namespace app::classes::types
