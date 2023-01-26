#pragma once
#include <Modloader/app/structs/ApiProcessingEventType__Enum.h>
#include <Modloader/app/structs/ApiProcessingEventType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApiProcessingEventType__Enum {
        inline app::ApiProcessingEventType__Enum__Class** type_info() {
            static app::ApiProcessingEventType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApiProcessingEventType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApiProcessingEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ApiProcessingEventType__Enum__Class>(type_info(), "PlayFab.Internal", "ApiProcessingEventType");
        }
        inline app::ApiProcessingEventType__Enum* create() {
            return il2cpp::create_object<app::ApiProcessingEventType__Enum>(get_class());
        }
    } // namespace ApiProcessingEventType__Enum
} // namespace app::classes::types
