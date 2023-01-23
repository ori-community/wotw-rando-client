#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeaponVFXSet__Array__Class.h>
#include <Modloader/app/structs/WeaponVFXSet__Array.h>

namespace app::classes::types {
    namespace WeaponVFXSet__Array {
        namespace {
            inline app::WeaponVFXSet__Array__Class* type_info_ref = nullptr;
        }
        inline app::WeaponVFXSet__Array__Class** type_info = &type_info_ref;
        inline app::WeaponVFXSet__Array__Class* get_class() {
            return il2cpp::get_class<app::WeaponVFXSet__Array__Class>(type_info, "", "WeaponVFXSet[]");
        }
        inline app::WeaponVFXSet__Array* create() {
            return il2cpp::create_object<app::WeaponVFXSet__Array>(get_class());
        }
    } // namespace WeaponVFXSet__Array
} // namespace app::classes::types
