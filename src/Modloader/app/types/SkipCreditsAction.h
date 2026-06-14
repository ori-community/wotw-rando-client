#pragma once
#include <Modloader/app/structs/SkipCreditsAction.h>
#include <Modloader/app/structs/SkipCreditsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkipCreditsAction {
        inline app::SkipCreditsAction__Class** type_info() {
            static app::SkipCreditsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkipCreditsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkipCreditsAction__Class* get_class() {
            return il2cpp::get_class<app::SkipCreditsAction__Class>(type_info(), "", "SkipCreditsAction");
        }
        inline app::SkipCreditsAction* create() {
            return il2cpp::create_object<app::SkipCreditsAction>(get_class());
        }
    } // namespace SkipCreditsAction
} // namespace app::classes::types
