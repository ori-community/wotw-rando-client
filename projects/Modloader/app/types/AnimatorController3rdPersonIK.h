#pragma once
#include <Modloader/app/structs/AnimatorController3rdPersonIK.h>
#include <Modloader/app/structs/AnimatorController3rdPersonIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorController3rdPersonIK {
        inline app::AnimatorController3rdPersonIK__Class** type_info() {
            static app::AnimatorController3rdPersonIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorController3rdPersonIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorController3rdPersonIK__Class* get_class() {
            return il2cpp::get_class<app::AnimatorController3rdPersonIK__Class>(type_info(), "RootMotion.Demos", "AnimatorController3rdPersonIK");
        }
        inline app::AnimatorController3rdPersonIK* create() {
            return il2cpp::create_object<app::AnimatorController3rdPersonIK>(get_class());
        }
    } // namespace AnimatorController3rdPersonIK
} // namespace app::classes::types
