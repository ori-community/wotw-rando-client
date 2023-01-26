#pragma once
#include <Modloader/app/structs/P3D_Node.h>
#include <Modloader/app/structs/P3D_Node__Array.h>
#include <Modloader/app/structs/P3D_Node__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_Node {
        inline app::P3D_Node__Class** type_info() {
            static app::P3D_Node__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::P3D_Node__Class**)(modloader::win::memory::resolve_rva(0x0478C090));
            }
            return cache;
        }
        inline app::P3D_Node__Class* get_class() {
            return il2cpp::get_class<app::P3D_Node__Class>(type_info(), "", "P3D_Node");
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
