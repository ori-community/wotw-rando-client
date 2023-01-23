#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeaponmasterItem__Array__Class.h>
#include <Modloader/app/structs/WeaponmasterItem__Array.h>

namespace app::classes::types {
    namespace WeaponmasterItem__Array {
        namespace {
            inline app::WeaponmasterItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::WeaponmasterItem__Array__Class** type_info = &type_info_ref;
        inline app::WeaponmasterItem__Array__Class* get_class() {
            return il2cpp::get_class<app::WeaponmasterItem__Array__Class>(type_info, "", "WeaponmasterItem[]");
        }
        inline app::WeaponmasterItem__Array* create() {
            return il2cpp::create_object<app::WeaponmasterItem__Array>(get_class());
        }
    } // namespace WeaponmasterItem__Array
} // namespace app::classes::types
