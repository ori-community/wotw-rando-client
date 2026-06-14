#pragma once
#include <Modloader/app/structs/MeleeComboMove.h>
#include <Modloader/app/structs/MeleeComboMove__Array.h>
#include <Modloader/app/structs/MeleeComboMove__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMove {
        inline app::MeleeComboMove__Class** type_info() {
            static app::MeleeComboMove__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMove__Class**)(modloader::win::memory::resolve_rva(0x0470B758));
            }
            return cache;
        }
        inline app::MeleeComboMove__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMove__Class>(type_info(), "", "MeleeComboMove");
        }
        inline app::MeleeComboMove* create() {
            return il2cpp::create_object<app::MeleeComboMove>(get_class());
        }
        inline app::MeleeComboMove__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeComboMove__Array>(get_class(), size);
        }
        inline app::MeleeComboMove__Array* create_array(const std::vector<app::MeleeComboMove*>& items) {
            return il2cpp::array_new<app::MeleeComboMove__Array>(get_class(), items);
        }
    } // namespace MeleeComboMove
} // namespace app::classes::types
