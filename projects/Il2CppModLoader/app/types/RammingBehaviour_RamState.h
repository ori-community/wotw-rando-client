#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_RamState {
        namespace {
            app::RammingBehaviour_RamState__Class* type_info_ref = nullptr;
        }
        app::RammingBehaviour_RamState__Class** type_info = &type_info_ref;
        inline app::RammingBehaviour_RamState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_RamState__Class>(type_info, "Moon", "RammingBehaviour", "RamState");
        }
        inline app::RammingBehaviour_RamState* create() {
            return il2cpp::create_object<app::RammingBehaviour_RamState>(get_class());
        }
    } // namespace RammingBehaviour_RamState
} // namespace app::classes::types
