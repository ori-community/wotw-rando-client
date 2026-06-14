#pragma once
#include <Modloader/app/structs/FaderBCustomFadeAction.h>
#include <Modloader/app/structs/FaderBCustomFadeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaderBCustomFadeAction {
        inline app::FaderBCustomFadeAction__Class** type_info() {
            static app::FaderBCustomFadeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FaderBCustomFadeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FaderBCustomFadeAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBCustomFadeAction__Class>(type_info(), "", "FaderBCustomFadeAction");
        }
        inline app::FaderBCustomFadeAction* create() {
            return il2cpp::create_object<app::FaderBCustomFadeAction>(get_class());
        }
    } // namespace FaderBCustomFadeAction
} // namespace app::classes::types
