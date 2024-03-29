#pragma once
#include <Modloader/app/structs/Face.h>
#include <Modloader/app/structs/Face__Array.h>
#include <Modloader/app/structs/Face__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Face {
        inline app::Face__Class** type_info() {
            static app::Face__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Face__Class**)(modloader::win::memory::resolve_rva(0x0477FF10));
            }
            return cache;
        }
        inline app::Face__Class* get_class() {
            return il2cpp::get_class<app::Face__Class>(type_info(), "TriangleNet.Topology.DCEL", "Face");
        }
        inline app::Face* create() {
            return il2cpp::create_object<app::Face>(get_class());
        }
        inline app::Face__Array* create_array(int size) {
            return il2cpp::array_new<app::Face__Array>(get_class(), size);
        }
        inline app::Face__Array* create_array(const std::vector<app::Face*>& items) {
            return il2cpp::array_new<app::Face__Array>(get_class(), items);
        }
    } // namespace Face
} // namespace app::classes::types
