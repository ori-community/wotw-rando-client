#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuadTree_Node__Class.h>
#include <Modloader/app/structs/QuadTree_Node.h>
#include <Modloader/app/structs/QuadTree_Node__Array.h>

namespace app::classes::types {
    namespace QuadTree_Node {
        inline app::QuadTree_Node__Class** type_info = (app::QuadTree_Node__Class**)(modloader::win::memory::resolve_rva(0x04787548));
        inline app::QuadTree_Node__Class* get_class() {
            return il2cpp::get_nested_class<app::QuadTree_Node__Class>(type_info, "Moon", "QuadTree", "Node");
        }
        inline app::QuadTree_Node* create() {
            return il2cpp::create_object<app::QuadTree_Node>(get_class());
        }
        inline app::QuadTree_Node__Array* create_array(int size) {
            return il2cpp::array_new<app::QuadTree_Node__Array>(get_class(), size);
        }
        inline app::QuadTree_Node__Array* create_array(const std::vector<app::QuadTree_Node*>& items) {
            return il2cpp::array_new<app::QuadTree_Node__Array>(get_class(), items);
        }
    } // namespace QuadTree_Node
} // namespace app::classes::types
