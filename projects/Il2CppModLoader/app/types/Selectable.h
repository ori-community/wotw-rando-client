#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Selectable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Selectable__Class** type_info;
        inline app::Selectable__Class* get_class() {
            return il2cpp::get_class<app::Selectable__Class>(type_info, "UnityEngine.UI", "Selectable");
        }
        inline app::Selectable* create() {
            return il2cpp::create_object<app::Selectable>(get_class());
        }
        inline app::Selectable__Array* create_array(int size) {
            return il2cpp::array_new<app::Selectable__Array>(get_class(), size);
        }
    } // namespace Selectable
} // namespace app::classes::types
