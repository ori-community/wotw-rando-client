#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaterialBasedSeinWeaponEffects__Class.h>
#include <Modloader/app/structs/MaterialBasedSeinWeaponEffects.h>

namespace app::classes::types {
    namespace MaterialBasedSeinWeaponEffects {
        namespace {
            inline app::MaterialBasedSeinWeaponEffects__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedSeinWeaponEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedSeinWeaponEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinWeaponEffects__Class>(type_info, "", "MaterialBasedSeinWeaponEffects");
        }
        inline app::MaterialBasedSeinWeaponEffects* create() {
            return il2cpp::create_object<app::MaterialBasedSeinWeaponEffects>(get_class());
        }
    } // namespace MaterialBasedSeinWeaponEffects
} // namespace app::classes::types
