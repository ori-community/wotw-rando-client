#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Pose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Pose__Class** type_info;
        inline app::Pose__Class* get_class() {
            return il2cpp::get_class<app::Pose__Class>(type_info, "UnityEngine", "Pose");
        }
        inline app::Pose* create() {
            return il2cpp::create_object<app::Pose>(get_class());
        }
        inline app::Pose__Boxed* box(app::Pose value) {
            return il2cpp::box_value<app::Pose__Boxed>(get_class(), value);
        }
    } // namespace Pose
} // namespace app::classes::types
