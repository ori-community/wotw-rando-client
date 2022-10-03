#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortingLayer {
        namespace {
            app::SortingLayer__Class* type_info_ref = nullptr;
        }
        app::SortingLayer__Class** type_info = &type_info_ref;
        inline app::SortingLayer__Class* get_class() {
            return il2cpp::get_class<app::SortingLayer__Class>(type_info, "UnityEngine", "SortingLayer");
        }
        inline app::SortingLayer* create() {
            return il2cpp::create_object<app::SortingLayer>(get_class());
        }
        inline app::SortingLayer__Boxed* box(app::SortingLayer value) {
            return il2cpp::box_value<app::SortingLayer__Boxed>(get_class(), value);
        }
    } // namespace SortingLayer
} // namespace app::classes::types
