#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationCurve__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationCurve__Array__Class** type_info;
        inline app::AnimationCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationCurve__Array__Class>(type_info, "UnityEngine", "AnimationCurve[]");
        }
        inline app::AnimationCurve__Array* create() {
            return il2cpp::create_object<app::AnimationCurve__Array>(get_class());
        }
    } // namespace AnimationCurve__Array
} // namespace app::classes::types
