#pragma once
#include <Modloader/app/structs/FadeFromBlackAction.h>
#include <Modloader/app/structs/FadeFromBlackAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FadeFromBlackAction {
        inline app::FadeFromBlackAction__Class** type_info() {
            static app::FadeFromBlackAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FadeFromBlackAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FadeFromBlackAction__Class* get_class() {
            return il2cpp::get_class<app::FadeFromBlackAction__Class>(type_info(), "", "FadeFromBlackAction");
        }
        inline app::FadeFromBlackAction* create() {
            return il2cpp::create_object<app::FadeFromBlackAction>(get_class());
        }
    } // namespace FadeFromBlackAction
} // namespace app::classes::types
