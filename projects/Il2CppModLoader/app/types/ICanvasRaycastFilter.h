#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICanvasRaycastFilter {
        inline app::ICanvasRaycastFilter__Class** type_info = (app::ICanvasRaycastFilter__Class**)(modloader::win::memory::resolve_rva(0x04706988));
        inline app::ICanvasRaycastFilter__Class* get_class() {
            return il2cpp::get_class<app::ICanvasRaycastFilter__Class>(type_info, "UnityEngine", "ICanvasRaycastFilter");
        }
    } // namespace ICanvasRaycastFilter
} // namespace app::classes::types
