#pragma once
#include <Modloader/app/structs/IWeapon.h>
#include <Modloader/app/structs/IWeapon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWeapon {
        inline app::IWeapon__Class** type_info() {
            static app::IWeapon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IWeapon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IWeapon__Class* get_class() {
            return il2cpp::get_class<app::IWeapon__Class>(type_info(), "Moon", "IWeapon");
        }
    } // namespace IWeapon
} // namespace app::classes::types
