#pragma once
#include <Modloader/app/structs/AlertStates__Enum.h>
#include <Modloader/app/structs/AlertStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlertStates__Enum {
        inline app::AlertStates__Enum__Class** type_info() {
            static app::AlertStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlertStates__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlertStates__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlertStates__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "AlertStates");
        }
        inline app::AlertStates__Enum* create() {
            return il2cpp::create_object<app::AlertStates__Enum>(get_class());
        }
    } // namespace AlertStates__Enum
} // namespace app::classes::types
