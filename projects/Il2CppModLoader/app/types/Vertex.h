#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vertex {
        inline app::Vertex__Class** type_info = (app::Vertex__Class**)(modloader::win::memory::resolve_rva(0x0470BD50));
        inline app::Vertex__Class* get_class() {
            return il2cpp::get_class<app::Vertex__Class>(type_info, "TriangleNet.Geometry", "Vertex");
        }
        inline app::Vertex* create() {
            return il2cpp::create_object<app::Vertex>(get_class());
        }
        inline app::Vertex__Array* create_array(int size) {
            return il2cpp::array_new<app::Vertex__Array>(get_class(), size);
        }
        inline app::Vertex__Array* create_array(const std::vector<app::Vertex*>& items) {
            return il2cpp::array_new<app::Vertex__Array>(get_class(), items);
        }
    } // namespace Vertex
} // namespace app::classes::types
