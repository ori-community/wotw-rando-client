#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGizmo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGizmo__Class** type_info;
        inline app::IGizmo__Class* get_class() {
            return il2cpp::get_class<app::IGizmo__Class>(type_info, "Moon", "IGizmo");
        }
        inline app::IGizmo__Array* create_array(int size) {
            return il2cpp::array_new<app::IGizmo__Array>(get_class(), size);
        }
    } // namespace IGizmo
} // namespace app::classes::types
