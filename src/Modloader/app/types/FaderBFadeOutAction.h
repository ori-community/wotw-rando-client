#pragma once
#include <Modloader/app/structs/FaderBFadeOutAction.h>
#include <Modloader/app/structs/FaderBFadeOutAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaderBFadeOutAction {
        inline app::FaderBFadeOutAction__Class** type_info() {
            static app::FaderBFadeOutAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FaderBFadeOutAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FaderBFadeOutAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBFadeOutAction__Class>(type_info(), "", "FaderBFadeOutAction");
        }
        inline app::FaderBFadeOutAction* create() {
            return il2cpp::create_object<app::FaderBFadeOutAction>(get_class());
        }
    } // namespace FaderBFadeOutAction
} // namespace app::classes::types
