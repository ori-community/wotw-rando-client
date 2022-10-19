#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell {
        inline app::SeinSpiritSpearSpell__Class** type_info = (app::SeinSpiritSpearSpell__Class**)(modloader::win::memory::resolve_rva(0x0470C9A0));
        inline app::SeinSpiritSpearSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpell__Class>(type_info, "", "SeinSpiritSpearSpell");
        }
        inline app::SeinSpiritSpearSpell* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell>(get_class());
        }
    } // namespace SeinSpiritSpearSpell
} // namespace app::classes::types
