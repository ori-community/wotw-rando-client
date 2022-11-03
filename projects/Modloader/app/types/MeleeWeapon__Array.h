#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeapon__Array {
        inline app::MeleeWeapon__Array__Class** type_info = (app::MeleeWeapon__Array__Class**)(modloader::win::memory::resolve_rva(0x04702758));
        inline app::MeleeWeapon__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeapon__Array__Class>(type_info, "", "MeleeWeapon[]");
        }
        inline app::MeleeWeapon__Array* create() {
            return il2cpp::create_object<app::MeleeWeapon__Array>(get_class());
        }
    } // namespace MeleeWeapon__Array
} // namespace app::classes::types
