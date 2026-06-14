#pragma once
#include <Modloader/app/structs/ContactSwitchSequencer.h>
#include <Modloader/app/structs/ContactSwitchSequencer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactSwitchSequencer {
        inline app::ContactSwitchSequencer__Class** type_info() {
            static app::ContactSwitchSequencer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactSwitchSequencer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactSwitchSequencer__Class* get_class() {
            return il2cpp::get_class<app::ContactSwitchSequencer__Class>(type_info(), "", "ContactSwitchSequencer");
        }
        inline app::ContactSwitchSequencer* create() {
            return il2cpp::create_object<app::ContactSwitchSequencer>(get_class());
        }
    } // namespace ContactSwitchSequencer
} // namespace app::classes::types
