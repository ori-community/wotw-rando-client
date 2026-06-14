#pragma once
#include <Modloader/app/structs/MeleeComboAdapter.h>
#include <Modloader/app/structs/MeleeComboAdapter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboAdapter {
        inline app::MeleeComboAdapter__Class** type_info() {
            static app::MeleeComboAdapter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboAdapter__Class**)(modloader::win::memory::resolve_rva(0x04703E60));
            }
            return cache;
        }
        inline app::MeleeComboAdapter__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboAdapter__Class>(type_info(), "Moon.ComboSystem", "MeleeComboAdapter");
        }
        inline app::MeleeComboAdapter* create() {
            return il2cpp::create_object<app::MeleeComboAdapter>(get_class());
        }
    } // namespace MeleeComboAdapter
} // namespace app::classes::types
