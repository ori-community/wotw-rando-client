#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AimPoser_Pose__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AimPoser_Pose__Array__Class** type_info;
        inline app::AimPoser_Pose__Array__Class* get_class() {
            return il2cpp::get_class<app::AimPoser_Pose__Array__Class>(type_info, "RootMotion.FinalIK", "AimPoser+Pose[]");
        }
        inline app::AimPoser_Pose__Array* create() {
            return il2cpp::create_object<app::AimPoser_Pose__Array>(get_class());
        }
    } // namespace AimPoser_Pose__Array
} // namespace app::classes::types
