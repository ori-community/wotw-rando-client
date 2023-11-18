#pragma once
#include <Modloader/app/structs/MeleeWeapon__Array.h>
#include <Modloader/app/structs/MeleeWeapon__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeapon__Array {
        inline app::MeleeWeapon__Array__Class** type_info() {
            static app::MeleeWeapon__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeWeapon__Array__Class**)(modloader::win::memory::resolve_rva(0x04702758));
            }
            return cache;
        }
        inline app::MeleeWeapon__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeapon__Array__Class>(type_info(), "", "MeleeWeapon[]");
        }
        inline app::MeleeWeapon__Array* create() {
            return il2cpp::create_object<app::MeleeWeapon__Array>(get_class());
        }
    } // namespace MeleeWeapon__Array
} // namespace app::classes::types
