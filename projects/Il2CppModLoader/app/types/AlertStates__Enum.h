#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AlertStates__Enum {
        namespace {
            app::AlertStates__Enum__Class* type_info_ref = nullptr;
        }
        app::AlertStates__Enum__Class** type_info = &type_info_ref;
        inline app::AlertStates__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlertStates__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "AlertStates");
        }
        inline app::AlertStates__Enum* create() {
            return il2cpp::create_object<app::AlertStates__Enum>(get_class());
        }
    } // namespace AlertStates__Enum
} // namespace app::classes::types
