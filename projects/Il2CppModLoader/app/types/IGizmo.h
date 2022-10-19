#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGizmo {
        inline app::IGizmo__Class** type_info = (app::IGizmo__Class**)(modloader::win::memory::resolve_rva(0x04772D08));
        inline app::IGizmo__Class* get_class() {
            return il2cpp::get_class<app::IGizmo__Class>(type_info, "Moon", "IGizmo");
        }
        inline app::IGizmo__Array* create_array(int size) {
            return il2cpp::array_new<app::IGizmo__Array>(get_class(), size);
        }
        inline app::IGizmo__Array* create_array(const std::vector<app::IGizmo*>& items) {
            return il2cpp::array_new<app::IGizmo__Array>(get_class(), items);
        }
    } // namespace IGizmo
} // namespace app::classes::types
