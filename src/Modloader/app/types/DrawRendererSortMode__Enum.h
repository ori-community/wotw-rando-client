#pragma once
#include <Modloader/app/structs/DrawRendererSortMode__Enum.h>
#include <Modloader/app/structs/DrawRendererSortMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSortMode__Enum {
        inline app::DrawRendererSortMode__Enum__Class** type_info() {
            static app::DrawRendererSortMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrawRendererSortMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrawRendererSortMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererSortMode__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "DrawRendererSortMode");
        }
        inline app::DrawRendererSortMode__Enum* create() {
            return il2cpp::create_object<app::DrawRendererSortMode__Enum>(get_class());
        }
    } // namespace DrawRendererSortMode__Enum
} // namespace app::classes::types
