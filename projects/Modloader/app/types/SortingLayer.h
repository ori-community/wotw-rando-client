#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortingLayer {
        namespace {
            inline app::SortingLayer__Class* type_info_ref = nullptr;
        }
        inline app::SortingLayer__Class** type_info = &type_info_ref;
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
