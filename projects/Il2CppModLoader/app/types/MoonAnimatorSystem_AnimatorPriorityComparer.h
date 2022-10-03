#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem_AnimatorPriorityComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimatorSystem_AnimatorPriorityComparer__Class** type_info;
        inline app::MoonAnimatorSystem_AnimatorPriorityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimatorSystem_AnimatorPriorityComparer__Class>(type_info, "Moon", "MoonAnimatorSystem", "AnimatorPriorityComparer");
        }
        inline app::MoonAnimatorSystem_AnimatorPriorityComparer* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem_AnimatorPriorityComparer>(get_class());
        }
    } // namespace MoonAnimatorSystem_AnimatorPriorityComparer
} // namespace app::classes::types
