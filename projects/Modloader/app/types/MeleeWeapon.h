#pragma once
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MeleeWeapon__Array.h>
#include <Modloader/app/structs/MeleeWeapon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeapon {
        inline app::MeleeWeapon__Class** type_info() {
            static app::MeleeWeapon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeWeapon__Class**)(modloader::win::memory::resolve_rva(0x04774348));
            }
            return cache;
        }
        inline app::MeleeWeapon__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeapon__Class>(type_info(), "", "MeleeWeapon");
        }
        inline app::MeleeWeapon* create() {
            return il2cpp::create_object<app::MeleeWeapon>(get_class());
        }
        inline app::MeleeWeapon__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeWeapon__Array>(get_class(), size);
        }
        inline app::MeleeWeapon__Array* create_array(const std::vector<app::MeleeWeapon*>& items) {
            return il2cpp::array_new<app::MeleeWeapon__Array>(get_class(), items);
        }
    } // namespace MeleeWeapon
} // namespace app::classes::types
