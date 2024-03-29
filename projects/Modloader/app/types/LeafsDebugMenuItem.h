#pragma once
#include <Modloader/app/structs/LeafsDebugMenuItem.h>
#include <Modloader/app/structs/LeafsDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeafsDebugMenuItem {
        inline app::LeafsDebugMenuItem__Class** type_info() {
            static app::LeafsDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeafsDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04735170));
            }
            return cache;
        }
        inline app::LeafsDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::LeafsDebugMenuItem__Class>(type_info(), "", "LeafsDebugMenuItem");
        }
        inline app::LeafsDebugMenuItem* create() {
            return il2cpp::create_object<app::LeafsDebugMenuItem>(get_class());
        }
    } // namespace LeafsDebugMenuItem
} // namespace app::classes::types
