#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_ActiveAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator_ActiveAnimation__Class** type_info;
        inline app::MoonAnimator_ActiveAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_ActiveAnimation__Class>(type_info, "Moon", "MoonAnimator", "ActiveAnimation");
        }
        inline app::MoonAnimator_ActiveAnimation* create() {
            return il2cpp::create_object<app::MoonAnimator_ActiveAnimation>(get_class());
        }
        inline app::MoonAnimator_ActiveAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_ActiveAnimation__Array>(get_class(), size);
        }
    } // namespace MoonAnimator_ActiveAnimation
} // namespace app::classes::types
