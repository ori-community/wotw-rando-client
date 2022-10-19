#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrenadeTrajectory {
        namespace {
            inline app::SeinGrenadeTrajectory__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrenadeTrajectory__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeTrajectory__Class* get_class() {
            return il2cpp::get_class<app::SeinGrenadeTrajectory__Class>(type_info, "", "SeinGrenadeTrajectory");
        }
        inline app::SeinGrenadeTrajectory* create() {
            return il2cpp::create_object<app::SeinGrenadeTrajectory>(get_class());
        }
    } // namespace SeinGrenadeTrajectory
} // namespace app::classes::types
