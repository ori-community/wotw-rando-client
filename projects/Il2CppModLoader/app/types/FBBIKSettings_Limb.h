#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBBIKSettings_Limb {
        namespace {
            inline app::FBBIKSettings_Limb__Class* type_info_ref = nullptr;
        }
        inline app::FBBIKSettings_Limb__Class** type_info = &type_info_ref;
        inline app::FBBIKSettings_Limb__Class* get_class() {
            return il2cpp::get_nested_class<app::FBBIKSettings_Limb__Class>(type_info, "RootMotion.Demos", "FBBIKSettings", "Limb");
        }
        inline app::FBBIKSettings_Limb* create() {
            return il2cpp::create_object<app::FBBIKSettings_Limb>(get_class());
        }
    } // namespace FBBIKSettings_Limb
} // namespace app::classes::types
