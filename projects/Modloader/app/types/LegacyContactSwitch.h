#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyContactSwitch__Class.h>
#include <Modloader/app/structs/LegacyContactSwitch.h>

namespace app::classes::types {
    namespace LegacyContactSwitch {
        namespace {
            inline app::LegacyContactSwitch__Class* type_info_ref = nullptr;
        }
        inline app::LegacyContactSwitch__Class** type_info = &type_info_ref;
        inline app::LegacyContactSwitch__Class* get_class() {
            return il2cpp::get_class<app::LegacyContactSwitch__Class>(type_info, "", "LegacyContactSwitch");
        }
        inline app::LegacyContactSwitch* create() {
            return il2cpp::create_object<app::LegacyContactSwitch>(get_class());
        }
    } // namespace LegacyContactSwitch
} // namespace app::classes::types
