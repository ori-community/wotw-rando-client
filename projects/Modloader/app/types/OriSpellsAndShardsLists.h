#pragma once
#include <Modloader/app/structs/OriSpellsAndShardsLists.h>
#include <Modloader/app/structs/OriSpellsAndShardsLists__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriSpellsAndShardsLists {
        inline app::OriSpellsAndShardsLists__Class** type_info() {
            static app::OriSpellsAndShardsLists__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OriSpellsAndShardsLists__Class**)(modloader::win::memory::resolve_rva(0x047184E0));
            }
            return cache;
        }
        inline app::OriSpellsAndShardsLists__Class* get_class() {
            return il2cpp::get_class<app::OriSpellsAndShardsLists__Class>(type_info(), "", "OriSpellsAndShardsLists");
        }
        inline app::OriSpellsAndShardsLists* create() {
            return il2cpp::create_object<app::OriSpellsAndShardsLists>(get_class());
        }
    } // namespace OriSpellsAndShardsLists
} // namespace app::classes::types
