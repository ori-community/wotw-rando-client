#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AimPoser_Pose {
        namespace {
            inline app::AimPoser_Pose__Class* type_info_ref = nullptr;
        }
        inline app::AimPoser_Pose__Class** type_info = &type_info_ref;
        inline app::AimPoser_Pose__Class* get_class() {
            return il2cpp::get_nested_class<app::AimPoser_Pose__Class>(type_info, "RootMotion.FinalIK", "AimPoser", "Pose");
        }
        inline app::AimPoser_Pose* create() {
            return il2cpp::create_object<app::AimPoser_Pose>(get_class());
        }
        inline app::AimPoser_Pose__Array* create_array(int size) {
            return il2cpp::array_new<app::AimPoser_Pose__Array>(get_class(), size);
        }
        inline app::AimPoser_Pose__Array* create_array(const std::vector<app::AimPoser_Pose*>& items) {
            return il2cpp::array_new<app::AimPoser_Pose__Array>(get_class(), items);
        }
    } // namespace AimPoser_Pose
} // namespace app::classes::types
