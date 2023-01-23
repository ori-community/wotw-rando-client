#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MortarSpitAttackSettings__Class.h>
#include <Modloader/app/structs/MortarSpitAttackSettings.h>

namespace app::classes::types {
    namespace MortarSpitAttackSettings {
        namespace {
            inline app::MortarSpitAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::MortarSpitAttackSettings__Class** type_info = &type_info_ref;
        inline app::MortarSpitAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MortarSpitAttackSettings__Class>(type_info, "", "MortarSpitAttackSettings");
        }
        inline app::MortarSpitAttackSettings* create() {
            return il2cpp::create_object<app::MortarSpitAttackSettings>(get_class());
        }
    } // namespace MortarSpitAttackSettings
} // namespace app::classes::types
