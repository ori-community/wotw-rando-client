#pragma once
#include <Modloader/app/structs/WeaponMasterIntroNode.h>
#include <Modloader/app/structs/WeaponMasterIntroNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterIntroNode {
        inline app::WeaponMasterIntroNode__Class** type_info() {
            static app::WeaponMasterIntroNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponMasterIntroNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponMasterIntroNode__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterIntroNode__Class>(type_info(), "", "WeaponMasterIntroNode");
        }
        inline app::WeaponMasterIntroNode* create() {
            return il2cpp::create_object<app::WeaponMasterIntroNode>(get_class());
        }
    } // namespace WeaponMasterIntroNode
} // namespace app::classes::types
