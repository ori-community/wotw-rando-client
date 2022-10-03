#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSortMode__Enum {
        namespace {
            app::DrawRendererSortMode__Enum__Class* type_info_ref = nullptr;
        }
        app::DrawRendererSortMode__Enum__Class** type_info = &type_info_ref;
        inline app::DrawRendererSortMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererSortMode__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "DrawRendererSortMode");
        }
        inline app::DrawRendererSortMode__Enum* create() {
            return il2cpp::create_object<app::DrawRendererSortMode__Enum>(get_class());
        }
    } // namespace DrawRendererSortMode__Enum
} // namespace app::classes::types
