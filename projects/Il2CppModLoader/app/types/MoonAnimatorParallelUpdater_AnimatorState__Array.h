#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorParallelUpdater_AnimatorState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class** type_info;
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorParallelUpdater_AnimatorState__Array__Class>(type_info, "Moon", "MoonAnimatorParallelUpdater+AnimatorState[]");
        }
        inline app::MoonAnimatorParallelUpdater_AnimatorState__Array* create() {
            return il2cpp::create_object<app::MoonAnimatorParallelUpdater_AnimatorState__Array>(get_class());
        }
    } // namespace MoonAnimatorParallelUpdater_AnimatorState__Array
} // namespace app::classes::types
