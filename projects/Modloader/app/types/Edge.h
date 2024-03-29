#pragma once
#include <Modloader/app/structs/Edge.h>
#include <Modloader/app/structs/Edge__Array.h>
#include <Modloader/app/structs/Edge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Edge {
        inline app::Edge__Class** type_info() {
            static app::Edge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Edge__Class**)(modloader::win::memory::resolve_rva(0x04794DC0));
            }
            return cache;
        }
        inline app::Edge__Class* get_class() {
            return il2cpp::get_class<app::Edge__Class>(type_info(), "TriangleNet.Geometry", "Edge");
        }
        inline app::Edge* create() {
            return il2cpp::create_object<app::Edge>(get_class());
        }
        inline app::Edge__Array* create_array(int size) {
            return il2cpp::array_new<app::Edge__Array>(get_class(), size);
        }
        inline app::Edge__Array* create_array(const std::vector<app::Edge*>& items) {
            return il2cpp::array_new<app::Edge__Array>(get_class(), items);
        }
    } // namespace Edge
} // namespace app::classes::types
