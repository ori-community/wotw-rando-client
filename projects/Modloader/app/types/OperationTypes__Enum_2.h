#pragma once
#include <Modloader/app/structs/OperationTypes__Enum_2.h>
#include <Modloader/app/structs/OperationTypes__Enum_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OperationTypes__Enum_2 {
        inline app::OperationTypes__Enum_2__Class** type_info() {
            static app::OperationTypes__Enum_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OperationTypes__Enum_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OperationTypes__Enum_2__Class* get_class() {
            return il2cpp::get_class<app::OperationTypes__Enum_2__Class>(type_info(), "PlayFab.ProfilesModels", "OperationTypes");
        }
        inline app::OperationTypes__Enum_2* create() {
            return il2cpp::create_object<app::OperationTypes__Enum_2>(get_class());
        }
    } // namespace OperationTypes__Enum_2
} // namespace app::classes::types
