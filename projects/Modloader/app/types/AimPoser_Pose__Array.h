#pragma once
#include <Modloader/app/structs/AimPoser_Pose__Array.h>
#include <Modloader/app/structs/AimPoser_Pose__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AimPoser_Pose__Array {
        inline app::AimPoser_Pose__Array__Class** type_info() {
            static app::AimPoser_Pose__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AimPoser_Pose__Array__Class**)(modloader::win::memory::resolve_rva(0x0477AAA8));
            }
            return cache;
        }
        inline app::AimPoser_Pose__Array__Class* get_class() {
            return il2cpp::get_class<app::AimPoser_Pose__Array__Class>(type_info(), "RootMotion.FinalIK", "AimPoser+Pose[]");
        }
        inline app::AimPoser_Pose__Array* create() {
            return il2cpp::create_object<app::AimPoser_Pose__Array>(get_class());
        }
    } // namespace AimPoser_Pose__Array
} // namespace app::classes::types
