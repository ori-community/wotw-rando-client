#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContactSwitchSequencer {
        namespace {
            inline app::ContactSwitchSequencer__Class* type_info_ref = nullptr;
        }
        inline app::ContactSwitchSequencer__Class** type_info = &type_info_ref;
        inline app::ContactSwitchSequencer__Class* get_class() {
            return il2cpp::get_class<app::ContactSwitchSequencer__Class>(type_info, "", "ContactSwitchSequencer");
        }
        inline app::ContactSwitchSequencer* create() {
            return il2cpp::create_object<app::ContactSwitchSequencer>(get_class());
        }
    } // namespace ContactSwitchSequencer
} // namespace app::classes::types
