#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMove {
        inline app::MeleeComboMove__Class** type_info = (app::MeleeComboMove__Class**)(modloader::win::memory::resolve_rva(0x0470B758));
        inline app::MeleeComboMove__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMove__Class>(type_info, "", "MeleeComboMove");
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
