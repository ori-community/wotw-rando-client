#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuadTree_Node {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuadTree_Node__Class** type_info;
        inline app::QuadTree_Node__Class* get_class() {
            return il2cpp::get_nested_class<app::QuadTree_Node__Class>(type_info, "Moon", "QuadTree", "Node");
        }
        inline app::QuadTree_Node* create() {
            return il2cpp::create_object<app::QuadTree_Node>(get_class());
        }
        inline app::QuadTree_Node__Array* create_array(int size) {
            return il2cpp::array_new<app::QuadTree_Node__Array>(get_class(), size);
        }
    } // namespace QuadTree_Node
} // namespace app::classes::types
