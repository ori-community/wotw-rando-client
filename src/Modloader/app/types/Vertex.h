#pragma once
#include <Modloader/app/structs/Vertex.h>
#include <Modloader/app/structs/Vertex__Array.h>
#include <Modloader/app/structs/Vertex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vertex {
        inline app::Vertex__Class** type_info() {
            static app::Vertex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vertex__Class**)(modloader::win::memory::resolve_rva(0x0470BD50));
            }
            return cache;
        }
        inline app::Vertex__Class* get_class() {
            return il2cpp::get_class<app::Vertex__Class>(type_info(), "TriangleNet.Geometry", "Vertex");
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
