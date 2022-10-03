#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Canvas_WillRenderCanvases {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Canvas_WillRenderCanvases__Class** type_info;
        inline app::Canvas_WillRenderCanvases__Class* get_class() {
            return il2cpp::get_nested_class<app::Canvas_WillRenderCanvases__Class>(type_info, "UnityEngine", "Canvas", "WillRenderCanvases");
        }
        inline app::Canvas_WillRenderCanvases* create() {
            return il2cpp::create_object<app::Canvas_WillRenderCanvases>(get_class());
        }
    } // namespace Canvas_WillRenderCanvases
} // namespace app::classes::types
