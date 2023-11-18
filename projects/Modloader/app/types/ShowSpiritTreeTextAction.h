#pragma once
#include <Modloader/app/structs/ShowSpiritTreeTextAction.h>
#include <Modloader/app/structs/ShowSpiritTreeTextAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowSpiritTreeTextAction {
        inline app::ShowSpiritTreeTextAction__Class** type_info() {
            static app::ShowSpiritTreeTextAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowSpiritTreeTextAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowSpiritTreeTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowSpiritTreeTextAction__Class>(type_info(), "", "ShowSpiritTreeTextAction");
        }
        inline app::ShowSpiritTreeTextAction* create() {
            return il2cpp::create_object<app::ShowSpiritTreeTextAction>(get_class());
        }
    } // namespace ShowSpiritTreeTextAction
} // namespace app::classes::types
