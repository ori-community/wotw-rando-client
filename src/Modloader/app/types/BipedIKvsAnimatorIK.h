#pragma once
#include <Modloader/app/structs/BipedIKvsAnimatorIK.h>
#include <Modloader/app/structs/BipedIKvsAnimatorIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BipedIKvsAnimatorIK {
        inline app::BipedIKvsAnimatorIK__Class** type_info() {
            static app::BipedIKvsAnimatorIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BipedIKvsAnimatorIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BipedIKvsAnimatorIK__Class* get_class() {
            return il2cpp::get_class<app::BipedIKvsAnimatorIK__Class>(type_info(), "RootMotion.Demos", "BipedIKvsAnimatorIK");
        }
        inline app::BipedIKvsAnimatorIK* create() {
            return il2cpp::create_object<app::BipedIKvsAnimatorIK>(get_class());
        }
    } // namespace BipedIKvsAnimatorIK
} // namespace app::classes::types
