#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGrenadeAttack_AutoAimSettings__Class.h>
#include <Modloader/app/structs/SeinGrenadeAttack_AutoAimSettings.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_AutoAimSettings {
        namespace {
            inline app::SeinGrenadeAttack_AutoAimSettings__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrenadeAttack_AutoAimSettings__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeAttack_AutoAimSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_AutoAimSettings__Class>(type_info, "", "SeinGrenadeAttack", "AutoAimSettings");
        }
        inline app::SeinGrenadeAttack_AutoAimSettings* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_AutoAimSettings>(get_class());
        }
    } // namespace SeinGrenadeAttack_AutoAimSettings
} // namespace app::classes::types
