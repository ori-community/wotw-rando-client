#pragma once
#include <Modloader/app/structs/SortingLayer.h>
#include <Modloader/app/structs/SortingLayer__Boxed.h>
#include <Modloader/app/structs/SortingLayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortingLayer {
        inline app::SortingLayer__Class** type_info() {
            static app::SortingLayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SortingLayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SortingLayer__Class* get_class() {
            return il2cpp::get_class<app::SortingLayer__Class>(type_info(), "UnityEngine", "SortingLayer");
        }
        inline app::SortingLayer* create() {
            return il2cpp::create_object<app::SortingLayer>(get_class());
        }
        inline app::SortingLayer__Boxed* box(app::SortingLayer value) {
            return il2cpp::box_value<app::SortingLayer__Boxed>(get_class(), value);
        }
    } // namespace SortingLayer
} // namespace app::classes::types
