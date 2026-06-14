#pragma once
#include <Modloader/app/structs/KeystoneDoorVisuals.h>
#include <Modloader/app/structs/KeystoneDoorVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorVisuals {
        inline app::KeystoneDoorVisuals__Class** type_info() {
            static app::KeystoneDoorVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeystoneDoorVisuals__Class**)(modloader::win::memory::resolve_rva(0x0470E298));
            }
            return cache;
        }
        inline app::KeystoneDoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorVisuals__Class>(type_info(), "", "KeystoneDoorVisuals");
        }
        inline app::KeystoneDoorVisuals* create() {
            return il2cpp::create_object<app::KeystoneDoorVisuals>(get_class());
        }
    } // namespace KeystoneDoorVisuals
} // namespace app::classes::types
