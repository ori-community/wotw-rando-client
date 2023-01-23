#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeaponBase__Class.h>
#include <Modloader/app/structs/WeaponBase.h>

namespace app::classes::types {
    namespace WeaponBase {
        namespace {
            inline app::WeaponBase__Class* type_info_ref = nullptr;
        }
        inline app::WeaponBase__Class** type_info = &type_info_ref;
        inline app::WeaponBase__Class* get_class() {
            return il2cpp::get_class<app::WeaponBase__Class>(type_info, "RootMotion.Demos", "WeaponBase");
        }
        inline app::WeaponBase* create() {
            return il2cpp::create_object<app::WeaponBase>(get_class());
        }
    } // namespace WeaponBase
} // namespace app::classes::types
