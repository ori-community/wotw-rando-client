#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Keyframe__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Keyframe__Array__Class** type_info;
        inline app::Keyframe__Array__Class* get_class() {
            return il2cpp::get_class<app::Keyframe__Array__Class>(type_info, "UnityEngine", "Keyframe[]");
        }
        inline app::Keyframe__Array* create() {
            return il2cpp::create_object<app::Keyframe__Array>(get_class());
        }
    } // namespace Keyframe__Array
} // namespace app::classes::types
