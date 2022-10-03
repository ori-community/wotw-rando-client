#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleJoint_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleJoint_c__Class** type_info;
        inline app::TentacleJoint_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleJoint_c__Class>(type_info, "", "TentacleJoint", "<>c");
        }
        inline app::TentacleJoint_c* create() {
            return il2cpp::create_object<app::TentacleJoint_c>(get_class());
        }
    } // namespace TentacleJoint_c
} // namespace app::classes::types
