#pragma once
#include <Modloader/app/structs/TitleActivationStatus__Enum_1.h>
#include <Modloader/app/structs/TitleActivationStatus__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleActivationStatus__Enum_1 {
        inline app::TitleActivationStatus__Enum_1__Class** type_info() {
            static app::TitleActivationStatus__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleActivationStatus__Enum_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleActivationStatus__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::TitleActivationStatus__Enum_1__Class>(type_info(), "PlayFab.ServerModels", "TitleActivationStatus");
        }
        inline app::TitleActivationStatus__Enum_1* create() {
            return il2cpp::create_object<app::TitleActivationStatus__Enum_1>(get_class());
        }
    } // namespace TitleActivationStatus__Enum_1
} // namespace app::classes::types
