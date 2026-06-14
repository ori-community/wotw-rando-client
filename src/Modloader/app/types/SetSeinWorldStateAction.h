#pragma once
#include <Modloader/app/structs/SetSeinWorldStateAction.h>
#include <Modloader/app/structs/SetSeinWorldStateAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetSeinWorldStateAction {
        inline app::SetSeinWorldStateAction__Class** type_info() {
            static app::SetSeinWorldStateAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetSeinWorldStateAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetSeinWorldStateAction__Class* get_class() {
            return il2cpp::get_class<app::SetSeinWorldStateAction__Class>(type_info(), "", "SetSeinWorldStateAction");
        }
        inline app::SetSeinWorldStateAction* create() {
            return il2cpp::create_object<app::SetSeinWorldStateAction>(get_class());
        }
    } // namespace SetSeinWorldStateAction
} // namespace app::classes::types
