#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeaponRifle__Class.h>
#include <Modloader/app/structs/WeaponRifle.h>

namespace app::classes::types {
    namespace WeaponRifle {
        namespace {
            inline app::WeaponRifle__Class* type_info_ref = nullptr;
        }
        inline app::WeaponRifle__Class** type_info = &type_info_ref;
        inline app::WeaponRifle__Class* get_class() {
            return il2cpp::get_class<app::WeaponRifle__Class>(type_info, "RootMotion.Demos", "WeaponRifle");
        }
        inline app::WeaponRifle* create() {
            return il2cpp::create_object<app::WeaponRifle>(get_class());
        }
    } // namespace WeaponRifle
} // namespace app::classes::types
