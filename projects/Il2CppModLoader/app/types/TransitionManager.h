#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransitionManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransitionManager__Class** type_info;
        inline app::TransitionManager__Class* get_class() {
            return il2cpp::get_class<app::TransitionManager__Class>(type_info, "Moon.InteractionGraph", "TransitionManager");
        }
        inline app::TransitionManager* create() {
            return il2cpp::create_object<app::TransitionManager>(get_class());
        }
        inline app::TransitionManager__Array* create_array(int size) {
            return il2cpp::array_new<app::TransitionManager__Array>(get_class(), size);
        }
        inline app::TransitionManager__Array* create_array(const std::vector<app::TransitionManager*>& items) {
            return il2cpp::array_new<app::TransitionManager__Array>(get_class(), items);
        }
    } // namespace TransitionManager
} // namespace app::classes::types
