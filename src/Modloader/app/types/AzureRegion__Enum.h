#pragma once
#include <Modloader/app/structs/AzureRegion__Enum.h>
#include <Modloader/app/structs/AzureRegion__Enum__Array.h>
#include <Modloader/app/structs/AzureRegion__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AzureRegion__Enum {
        inline app::AzureRegion__Enum__Class** type_info() {
            static app::AzureRegion__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AzureRegion__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AzureRegion__Enum__Class* get_class() {
            return il2cpp::get_class<app::AzureRegion__Enum__Class>(type_info(), "PlayFab.MultiplayerModels", "AzureRegion");
        }
        inline app::AzureRegion__Enum* create() {
            return il2cpp::create_object<app::AzureRegion__Enum>(get_class());
        }
        inline app::AzureRegion__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::AzureRegion__Enum__Array>(get_class(), size);
        }
        inline app::AzureRegion__Enum__Array* create_array(const std::vector<app::AzureRegion__Enum*>& items) {
            return il2cpp::array_new<app::AzureRegion__Enum__Array>(get_class(), items);
        }
    } // namespace AzureRegion__Enum
} // namespace app::classes::types
