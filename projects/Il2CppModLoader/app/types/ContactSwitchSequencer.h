#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactSwitchSequencer {
        namespace {
            app::ContactSwitchSequencer__Class* type_info_ref = nullptr;
        }
        app::ContactSwitchSequencer__Class** type_info = &type_info_ref;
        inline app::ContactSwitchSequencer__Class* get_class() {
            return il2cpp::get_class<app::ContactSwitchSequencer__Class>(type_info, "", "ContactSwitchSequencer");
        }
        inline app::ContactSwitchSequencer* create() {
            return il2cpp::create_object<app::ContactSwitchSequencer>(get_class());
        }
    } // namespace ContactSwitchSequencer
} // namespace app::classes::types
