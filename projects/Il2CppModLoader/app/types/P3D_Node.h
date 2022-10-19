#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Node {
        inline app::P3D_Node__Class** type_info = (app::P3D_Node__Class**)(modloader::win::memory::resolve_rva(0x0478C090));
        inline app::P3D_Node__Class* get_class() {
            return il2cpp::get_class<app::P3D_Node__Class>(type_info, "", "P3D_Node");
        }
        inline app::P3D_Node* create() {
            return il2cpp::create_object<app::P3D_Node>(get_class());
        }
        inline app::P3D_Node__Array* create_array(int size) {
            return il2cpp::array_new<app::P3D_Node__Array>(get_class(), size);
        }
        inline app::P3D_Node__Array* create_array(const std::vector<app::P3D_Node*>& items) {
            return il2cpp::array_new<app::P3D_Node__Array>(get_class(), items);
        }
    } // namespace P3D_Node
} // namespace app::classes::types
