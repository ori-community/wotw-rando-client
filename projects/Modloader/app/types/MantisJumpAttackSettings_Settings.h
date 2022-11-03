#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisJumpAttackSettings_Settings {
        namespace {
            inline app::MantisJumpAttackSettings_Settings__Class* type_info_ref = nullptr;
        }
        inline app::MantisJumpAttackSettings_Settings__Class** type_info = &type_info_ref;
        inline app::MantisJumpAttackSettings_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackSettings_Settings__Class>(type_info, "", "MantisJumpAttackSettings", "Settings");
        }
        inline app::MantisJumpAttackSettings_Settings* create() {
            return il2cpp::create_object<app::MantisJumpAttackSettings_Settings>(get_class());
        }
    } // namespace MantisJumpAttackSettings_Settings
} // namespace app::classes::types
