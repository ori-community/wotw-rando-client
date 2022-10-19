#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleJoint {
        namespace {
            inline app::TentacleJoint__Class* type_info_ref = nullptr;
        }
        inline app::TentacleJoint__Class** type_info = &type_info_ref;
        inline app::TentacleJoint__Class* get_class() {
            return il2cpp::get_class<app::TentacleJoint__Class>(type_info, "", "TentacleJoint");
        }
        inline app::TentacleJoint* create() {
            return il2cpp::create_object<app::TentacleJoint>(get_class());
        }
    } // namespace TentacleJoint
} // namespace app::classes::types
