#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoreNodeWisps {
        inline app::LoreNodeWisps__Class** type_info = (app::LoreNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x04710830));
        inline app::LoreNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::LoreNodeWisps__Class>(type_info, "", "LoreNodeWisps");
        }
        inline app::LoreNodeWisps* create() {
            return il2cpp::create_object<app::LoreNodeWisps>(get_class());
        }
    } // namespace LoreNodeWisps
} // namespace app::classes::types
