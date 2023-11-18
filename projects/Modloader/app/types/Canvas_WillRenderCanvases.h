#pragma once
#include <Modloader/app/structs/Canvas_WillRenderCanvases.h>
#include <Modloader/app/structs/Canvas_WillRenderCanvases__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Canvas_WillRenderCanvases {
        inline app::Canvas_WillRenderCanvases__Class** type_info() {
            static app::Canvas_WillRenderCanvases__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Canvas_WillRenderCanvases__Class**)(modloader::win::memory::resolve_rva(0x04707570));
            }
            return cache;
        }
        inline app::Canvas_WillRenderCanvases__Class* get_class() {
            return il2cpp::get_nested_class<app::Canvas_WillRenderCanvases__Class>(type_info(), "UnityEngine", "Canvas", "WillRenderCanvases");
        }
        inline app::Canvas_WillRenderCanvases* create() {
            return il2cpp::create_object<app::Canvas_WillRenderCanvases>(get_class());
        }
    } // namespace Canvas_WillRenderCanvases
} // namespace app::classes::types
