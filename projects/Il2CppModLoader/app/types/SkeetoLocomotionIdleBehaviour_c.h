#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotionIdleBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoLocomotionIdleBehaviour_c__Class** type_info;
        inline app::SkeetoLocomotionIdleBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoLocomotionIdleBehaviour_c__Class>(type_info, "", "SkeetoLocomotionIdleBehaviour", "<>c");
        }
        inline app::SkeetoLocomotionIdleBehaviour_c* create() {
            return il2cpp::create_object<app::SkeetoLocomotionIdleBehaviour_c>(get_class());
        }
    } // namespace SkeetoLocomotionIdleBehaviour_c
} // namespace app::classes::types
