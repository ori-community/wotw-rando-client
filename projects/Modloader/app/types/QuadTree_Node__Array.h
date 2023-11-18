#pragma once
#include <Modloader/app/structs/QuadTree_Node__Array.h>
#include <Modloader/app/structs/QuadTree_Node__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuadTree_Node__Array {
        inline app::QuadTree_Node__Array__Class** type_info() {
            static app::QuadTree_Node__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuadTree_Node__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuadTree_Node__Array__Class* get_class() {
            return il2cpp::get_class<app::QuadTree_Node__Array__Class>(type_info(), "Moon", "QuadTree+Node[]");
        }
        inline app::QuadTree_Node__Array* create() {
            return il2cpp::create_object<app::QuadTree_Node__Array>(get_class());
        }
    } // namespace QuadTree_Node__Array
} // namespace app::classes::types
