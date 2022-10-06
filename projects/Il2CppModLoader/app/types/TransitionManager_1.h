#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransitionManager_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransitionManager_1__Class** type_info;
        inline app::TransitionManager_1__Class* get_class() {
            return il2cpp::get_class<app::TransitionManager_1__Class>(type_info, "fsm", "TransitionManager");
        }
        inline app::TransitionManager_1* create() {
            return il2cpp::create_object<app::TransitionManager_1>(get_class());
        }
        inline app::TransitionManager_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TransitionManager_1__Array>(get_class(), size);
        }
        inline app::TransitionManager_1__Array* create_array(const std::vector<app::TransitionManager_1*>& items) {
            return il2cpp::array_new<app::TransitionManager_1__Array>(get_class(), items);
        }
    } // namespace TransitionManager_1
} // namespace app::classes::types
