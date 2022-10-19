#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApiProcessingEventType__Enum {
        namespace {
            inline app::ApiProcessingEventType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ApiProcessingEventType__Enum__Class** type_info = &type_info_ref;
        inline app::ApiProcessingEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ApiProcessingEventType__Enum__Class>(type_info, "PlayFab.Internal", "ApiProcessingEventType");
        }
        inline app::ApiProcessingEventType__Enum* create() {
            return il2cpp::create_object<app::ApiProcessingEventType__Enum>(get_class());
        }
    } // namespace ApiProcessingEventType__Enum
} // namespace app::classes::types
