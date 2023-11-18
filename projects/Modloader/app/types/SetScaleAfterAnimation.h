#pragma once
#include <Modloader/app/structs/SetScaleAfterAnimation.h>
#include <Modloader/app/structs/SetScaleAfterAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetScaleAfterAnimation {
        inline app::SetScaleAfterAnimation__Class** type_info() {
            static app::SetScaleAfterAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetScaleAfterAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetScaleAfterAnimation__Class* get_class() {
            return il2cpp::get_class<app::SetScaleAfterAnimation__Class>(type_info(), "", "SetScaleAfterAnimation");
        }
        inline app::SetScaleAfterAnimation* create() {
            return il2cpp::create_object<app::SetScaleAfterAnimation>(get_class());
        }
    } // namespace SetScaleAfterAnimation
} // namespace app::classes::types
