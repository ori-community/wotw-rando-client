#pragma once
#include <Modloader/app/structs/ICanvasRaycastFilter.h>
#include <Modloader/app/structs/ICanvasRaycastFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICanvasRaycastFilter {
        inline app::ICanvasRaycastFilter__Class** type_info() {
            static app::ICanvasRaycastFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICanvasRaycastFilter__Class**)(modloader::win::memory::resolve_rva(0x04706988));
            }
            return cache;
        }
        inline app::ICanvasRaycastFilter__Class* get_class() {
            return il2cpp::get_class<app::ICanvasRaycastFilter__Class>(type_info(), "UnityEngine", "ICanvasRaycastFilter");
        }
    } // namespace ICanvasRaycastFilter
} // namespace app::classes::types
