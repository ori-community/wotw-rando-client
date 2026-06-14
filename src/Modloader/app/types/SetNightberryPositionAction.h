#pragma once
#include <Modloader/app/structs/SetNightberryPositionAction.h>
#include <Modloader/app/structs/SetNightberryPositionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetNightberryPositionAction {
        inline app::SetNightberryPositionAction__Class** type_info() {
            static app::SetNightberryPositionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetNightberryPositionAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetNightberryPositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetNightberryPositionAction__Class>(type_info(), "", "SetNightberryPositionAction");
        }
        inline app::SetNightberryPositionAction* create() {
            return il2cpp::create_object<app::SetNightberryPositionAction>(get_class());
        }
    } // namespace SetNightberryPositionAction
} // namespace app::classes::types
