#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransitionManager_1__Array {
        namespace {
            inline app::TransitionManager_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::TransitionManager_1__Array__Class** type_info = &type_info_ref;
        inline app::TransitionManager_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TransitionManager_1__Array__Class>(type_info, "fsm", "TransitionManager[]");
        }
        inline app::TransitionManager_1__Array* create() {
            return il2cpp::create_object<app::TransitionManager_1__Array>(get_class());
        }
    } // namespace TransitionManager_1__Array
} // namespace app::classes::types
