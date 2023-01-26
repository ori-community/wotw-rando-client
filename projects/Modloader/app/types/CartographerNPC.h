#pragma once
#include <Modloader/app/structs/CartographerNPC.h>
#include <Modloader/app/structs/CartographerNPC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerNPC {
        inline app::CartographerNPC__Class** type_info() {
            static app::CartographerNPC__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CartographerNPC__Class**)(modloader::win::memory::resolve_rva(0x0472F470));
            }
            return cache;
        }
        inline app::CartographerNPC__Class* get_class() {
            return il2cpp::get_class<app::CartographerNPC__Class>(type_info(), "", "CartographerNPC");
        }
        inline app::CartographerNPC* create() {
            return il2cpp::create_object<app::CartographerNPC>(get_class());
        }
    } // namespace CartographerNPC
} // namespace app::classes::types
