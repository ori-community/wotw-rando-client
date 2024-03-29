#pragma once
#include <Modloader/app/structs/Triangle.h>
#include <Modloader/app/structs/Triangle__Array.h>
#include <Modloader/app/structs/Triangle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Triangle {
        inline app::Triangle__Class** type_info() {
            static app::Triangle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Triangle__Class**)(modloader::win::memory::resolve_rva(0x04729078));
            }
            return cache;
        }
        inline app::Triangle__Class* get_class() {
            return il2cpp::get_class<app::Triangle__Class>(type_info(), "TriangleNet.Topology", "Triangle");
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
