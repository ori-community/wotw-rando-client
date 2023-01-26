#pragma once
#include <Modloader/app/structs/FBBIKArmBending.h>
#include <Modloader/app/structs/FBBIKArmBending__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBBIKArmBending {
        inline app::FBBIKArmBending__Class** type_info() {
            static app::FBBIKArmBending__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBBIKArmBending__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBBIKArmBending__Class* get_class() {
            return il2cpp::get_class<app::FBBIKArmBending__Class>(type_info(), "RootMotion.FinalIK", "FBBIKArmBending");
        }
        inline app::FBBIKArmBending* create() {
            return il2cpp::create_object<app::FBBIKArmBending>(get_class());
        }
    } // namespace FBBIKArmBending
} // namespace app::classes::types
