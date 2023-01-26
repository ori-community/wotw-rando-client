#pragma once
#include <Modloader/app/structs/ScrollLocks.h>
#include <Modloader/app/structs/ScrollLocks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScrollLocks {
        inline app::ScrollLocks__Class** type_info() {
            static app::ScrollLocks__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScrollLocks__Class**)(modloader::win::memory::resolve_rva(0x04762CD8));
            }
            return cache;
        }
        inline app::ScrollLocks__Class* get_class() {
            return il2cpp::get_class<app::ScrollLocks__Class>(type_info(), "Game", "ScrollLocks");
        }
        inline app::ScrollLocks* create() {
            return il2cpp::create_object<app::ScrollLocks>(get_class());
        }
    } // namespace ScrollLocks
} // namespace app::classes::types
