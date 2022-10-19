#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriSpellsAndShardsLists {
        inline app::OriSpellsAndShardsLists__Class** type_info = (app::OriSpellsAndShardsLists__Class**)(modloader::win::memory::resolve_rva(0x047184E0));
        inline app::OriSpellsAndShardsLists__Class* get_class() {
            return il2cpp::get_class<app::OriSpellsAndShardsLists__Class>(type_info, "", "OriSpellsAndShardsLists");
        }
        inline app::OriSpellsAndShardsLists* create() {
            return il2cpp::create_object<app::OriSpellsAndShardsLists>(get_class());
        }
    } // namespace OriSpellsAndShardsLists
} // namespace app::classes::types
