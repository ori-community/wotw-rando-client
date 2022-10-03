#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LianaEntity_TongueJoint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LianaEntity_TongueJoint__Array__Class** type_info;
        inline app::LianaEntity_TongueJoint__Array__Class* get_class() {
            return il2cpp::get_class<app::LianaEntity_TongueJoint__Array__Class>(type_info, "", "LianaEntity+TongueJoint[]");
        }
        inline app::LianaEntity_TongueJoint__Array* create() {
            return il2cpp::create_object<app::LianaEntity_TongueJoint__Array>(get_class());
        }
    } // namespace LianaEntity_TongueJoint__Array
} // namespace app::classes::types
