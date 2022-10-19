#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBBIKArmBending {
        namespace {
            inline app::FBBIKArmBending__Class* type_info_ref = nullptr;
        }
        inline app::FBBIKArmBending__Class** type_info = &type_info_ref;
        inline app::FBBIKArmBending__Class* get_class() {
            return il2cpp::get_class<app::FBBIKArmBending__Class>(type_info, "RootMotion.FinalIK", "FBBIKArmBending");
        }
        inline app::FBBIKArmBending* create() {
            return il2cpp::create_object<app::FBBIKArmBending>(get_class());
        }
    } // namespace FBBIKArmBending
} // namespace app::classes::types
