#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Triangle {
        inline app::Triangle__Class** type_info = (app::Triangle__Class**)(modloader::win::memory::resolve_rva(0x04729078));
        inline app::Triangle__Class* get_class() {
            return il2cpp::get_class<app::Triangle__Class>(type_info, "TriangleNet.Topology", "Triangle");
        }
        inline app::Triangle* create() {
            return il2cpp::create_object<app::Triangle>(get_class());
        }
        inline app::Triangle__Array* create_array(int size) {
            return il2cpp::array_new<app::Triangle__Array>(get_class(), size);
        }
        inline app::Triangle__Array* create_array(const std::vector<app::Triangle*>& items) {
            return il2cpp::array_new<app::Triangle__Array>(get_class(), items);
        }
    } // namespace Triangle
} // namespace app::classes::types
