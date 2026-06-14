#pragma once
#include <Modloader/app/structs/DrawRendererFlags__Enum.h>
#include <Modloader/app/structs/DrawRendererFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawRendererFlags__Enum {
        inline app::DrawRendererFlags__Enum__Class** type_info() {
            static app::DrawRendererFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrawRendererFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrawRendererFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererFlags__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "DrawRendererFlags");
        }
        inline app::DrawRendererFlags__Enum* create() {
            return il2cpp::create_object<app::DrawRendererFlags__Enum>(get_class());
        }
    } // namespace DrawRendererFlags__Enum
} // namespace app::classes::types
