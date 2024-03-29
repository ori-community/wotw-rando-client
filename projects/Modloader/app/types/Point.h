#pragma once
#include <Modloader/app/structs/Point.h>
#include <Modloader/app/structs/Point__Array.h>
#include <Modloader/app/structs/Point__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Point {
        inline app::Point__Class** type_info() {
            static app::Point__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Point__Class**)(modloader::win::memory::resolve_rva(0x0475ADA0));
            }
            return cache;
        }
        inline app::Point__Class* get_class() {
            return il2cpp::get_class<app::Point__Class>(type_info(), "TriangleNet.Geometry", "Point");
        }
        inline app::Point* create() {
            return il2cpp::create_object<app::Point>(get_class());
        }
        inline app::Point__Array* create_array(int size) {
            return il2cpp::array_new<app::Point__Array>(get_class(), size);
        }
        inline app::Point__Array* create_array(const std::vector<app::Point*>& items) {
            return il2cpp::array_new<app::Point__Array>(get_class(), items);
        }
    } // namespace Point
} // namespace app::classes::types
