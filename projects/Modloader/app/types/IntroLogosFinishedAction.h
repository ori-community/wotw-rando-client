#pragma once
#include <Modloader/app/structs/IntroLogosFinishedAction.h>
#include <Modloader/app/structs/IntroLogosFinishedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntroLogosFinishedAction {
        inline app::IntroLogosFinishedAction__Class** type_info() {
            static app::IntroLogosFinishedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntroLogosFinishedAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntroLogosFinishedAction__Class* get_class() {
            return il2cpp::get_class<app::IntroLogosFinishedAction__Class>(type_info(), "", "IntroLogosFinishedAction");
        }
        inline app::IntroLogosFinishedAction* create() {
            return il2cpp::create_object<app::IntroLogosFinishedAction>(get_class());
        }
    } // namespace IntroLogosFinishedAction
} // namespace app::classes::types
