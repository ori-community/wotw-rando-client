#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingThrownState {
        namespace {
            app::RammingThrownState__Class* type_info_ref = nullptr;
        }
        app::RammingThrownState__Class** type_info = &type_info_ref;
        inline app::RammingThrownState__Class* get_class() {
            return il2cpp::get_class<app::RammingThrownState__Class>(type_info, "", "RammingThrownState");
        }
        inline app::RammingThrownState* create() {
            return il2cpp::create_object<app::RammingThrownState>(get_class());
        }
    } // namespace RammingThrownState
} // namespace app::classes::types
