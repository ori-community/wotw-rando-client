#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletEdge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletEdge__Class** type_info;
        inline app::VerletEdge__Class* get_class() {
            return il2cpp::get_class<app::VerletEdge__Class>(type_info, "", "VerletEdge");
        }
        inline app::VerletEdge* create() {
            return il2cpp::create_object<app::VerletEdge>(get_class());
        }
        inline app::VerletEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletEdge__Array>(get_class(), size);
        }
        inline app::VerletEdge__Array* create_array(const std::vector<app::VerletEdge*>& items) {
            return il2cpp::array_new<app::VerletEdge__Array>(get_class(), items);
        }
    } // namespace VerletEdge
} // namespace app::classes::types
