#pragma once
#include <Modloader/app/structs/LoreNodeWisps.h>
#include <Modloader/app/structs/LoreNodeWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoreNodeWisps {
        inline app::LoreNodeWisps__Class** type_info() {
            static app::LoreNodeWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoreNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x04710830));
            }
            return cache;
        }
        inline app::LoreNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::LoreNodeWisps__Class>(type_info(), "", "LoreNodeWisps");
        }
        inline app::LoreNodeWisps* create() {
            return il2cpp::create_object<app::LoreNodeWisps>(get_class());
        }
    } // namespace LoreNodeWisps
} // namespace app::classes::types
