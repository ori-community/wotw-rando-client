#pragma once
#include <Modloader/app/structs/FBBIKSettings_Limb.h>
#include <Modloader/app/structs/FBBIKSettings_Limb__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBBIKSettings_Limb {
        inline app::FBBIKSettings_Limb__Class** type_info() {
            static app::FBBIKSettings_Limb__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBBIKSettings_Limb__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBBIKSettings_Limb__Class* get_class() {
            return il2cpp::get_nested_class<app::FBBIKSettings_Limb__Class>(type_info(), "RootMotion.Demos", "FBBIKSettings", "Limb");
        }
        inline app::FBBIKSettings_Limb* create() {
            return il2cpp::create_object<app::FBBIKSettings_Limb>(get_class());
        }
    } // namespace FBBIKSettings_Limb
} // namespace app::classes::types
