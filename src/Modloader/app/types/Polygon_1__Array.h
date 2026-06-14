#pragma once
#include <Modloader/app/structs/Polygon_1__Array.h>
#include <Modloader/app/structs/Polygon_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Polygon_1__Array {
        inline app::Polygon_1__Array__Class** type_info() {
            static app::Polygon_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Polygon_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Polygon_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Polygon_1__Array__Class>(type_info(), "", "Polygon[]");
        }
        inline app::Polygon_1__Array* create() {
            return il2cpp::create_object<app::Polygon_1__Array>(get_class());
        }
    } // namespace Polygon_1__Array
} // namespace app::classes::types
