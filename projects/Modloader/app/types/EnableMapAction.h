#pragma once
#include <Modloader/app/structs/EnableMapAction.h>
#include <Modloader/app/structs/EnableMapAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableMapAction {
        inline app::EnableMapAction__Class** type_info() {
            static app::EnableMapAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableMapAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableMapAction__Class* get_class() {
            return il2cpp::get_class<app::EnableMapAction__Class>(type_info(), "", "EnableMapAction");
        }
        inline app::EnableMapAction* create() {
            return il2cpp::create_object<app::EnableMapAction>(get_class());
        }
    } // namespace EnableMapAction
} // namespace app::classes::types
