#pragma once
#include <Modloader/app/structs/AlertLevel__Enum_2.h>
#include <Modloader/app/structs/AlertLevel__Enum_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlertLevel__Enum_2 {
        inline app::AlertLevel__Enum_2__Class** type_info() {
            static app::AlertLevel__Enum_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlertLevel__Enum_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlertLevel__Enum_2__Class* get_class() {
            return il2cpp::get_class<app::AlertLevel__Enum_2__Class>(type_info(), "PlayFab.PlayStreamModels", "AlertLevel");
        }
        inline app::AlertLevel__Enum_2* create() {
            return il2cpp::create_object<app::AlertLevel__Enum_2>(get_class());
        }
    } // namespace AlertLevel__Enum_2
} // namespace app::classes::types
