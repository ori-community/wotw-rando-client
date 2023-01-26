#pragma once
#include <Modloader/app/structs/Items.h>
#include <Modloader/app/structs/Items__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Items {
        inline app::Items__Class** type_info() {
            static app::Items__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Items__Class**)(modloader::win::memory::resolve_rva(0x0475CB78));
            }
            return cache;
        }
        inline app::Items__Class* get_class() {
            return il2cpp::get_class<app::Items__Class>(type_info(), "Game", "Items");
        }
        inline app::Items* create() {
            return il2cpp::create_object<app::Items>(get_class());
        }
    } // namespace Items
} // namespace app::classes::types
