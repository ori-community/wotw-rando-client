#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchCase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwitchCase__Class** type_info;
        inline app::SwitchCase__Class* get_class() {
            return il2cpp::get_class<app::SwitchCase__Class>(type_info, "System.Linq.Expressions", "SwitchCase");
        }
        inline app::SwitchCase* create() {
            return il2cpp::create_object<app::SwitchCase>(get_class());
        }
        inline app::SwitchCase__Array* create_array(int size) {
            return il2cpp::array_new<app::SwitchCase__Array>(get_class(), size);
        }
    } // namespace SwitchCase
} // namespace app::classes::types
