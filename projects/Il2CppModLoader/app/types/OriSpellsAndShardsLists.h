#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriSpellsAndShardsLists {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OriSpellsAndShardsLists__Class** type_info;
        inline app::OriSpellsAndShardsLists__Class* get_class() {
            return il2cpp::get_class<app::OriSpellsAndShardsLists__Class>(type_info, "", "OriSpellsAndShardsLists");
        }
        inline app::OriSpellsAndShardsLists* create() {
            return il2cpp::create_object<app::OriSpellsAndShardsLists>(get_class());
        }
    } // namespace OriSpellsAndShardsLists
} // namespace app::classes::types
