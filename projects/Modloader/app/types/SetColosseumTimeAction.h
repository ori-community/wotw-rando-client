#pragma once
#include <Modloader/app/structs/SetColosseumTimeAction.h>
#include <Modloader/app/structs/SetColosseumTimeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetColosseumTimeAction {
        inline app::SetColosseumTimeAction__Class** type_info() {
            static app::SetColosseumTimeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetColosseumTimeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetColosseumTimeAction__Class* get_class() {
            return il2cpp::get_class<app::SetColosseumTimeAction__Class>(type_info(), "", "SetColosseumTimeAction");
        }
        inline app::SetColosseumTimeAction* create() {
            return il2cpp::create_object<app::SetColosseumTimeAction>(get_class());
        }
    } // namespace SetColosseumTimeAction
} // namespace app::classes::types
