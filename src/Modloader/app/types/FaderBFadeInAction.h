#pragma once
#include <Modloader/app/structs/FaderBFadeInAction.h>
#include <Modloader/app/structs/FaderBFadeInAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaderBFadeInAction {
        inline app::FaderBFadeInAction__Class** type_info() {
            static app::FaderBFadeInAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FaderBFadeInAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FaderBFadeInAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBFadeInAction__Class>(type_info(), "", "FaderBFadeInAction");
        }
        inline app::FaderBFadeInAction* create() {
            return il2cpp::create_object<app::FaderBFadeInAction>(get_class());
        }
    } // namespace FaderBFadeInAction
} // namespace app::classes::types
