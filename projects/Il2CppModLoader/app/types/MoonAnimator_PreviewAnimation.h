#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_PreviewAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator_PreviewAnimation__Class** type_info;
        inline app::MoonAnimator_PreviewAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_PreviewAnimation__Class>(type_info, "Moon", "MoonAnimator", "PreviewAnimation");
        }
        inline app::MoonAnimator_PreviewAnimation* create() {
            return il2cpp::create_object<app::MoonAnimator_PreviewAnimation>(get_class());
        }
        inline app::MoonAnimator_PreviewAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_PreviewAnimation__Array>(get_class(), size);
        }
    } // namespace MoonAnimator_PreviewAnimation
} // namespace app::classes::types
