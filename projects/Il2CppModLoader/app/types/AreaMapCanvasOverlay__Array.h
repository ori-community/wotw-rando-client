#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapCanvasOverlay__Array {
        namespace {
            inline app::AreaMapCanvasOverlay__Array__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapCanvasOverlay__Array__Class** type_info = &type_info_ref;
        inline app::AreaMapCanvasOverlay__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvasOverlay__Array__Class>(type_info, "", "AreaMapCanvasOverlay[]");
        }
        inline app::AreaMapCanvasOverlay__Array* create() {
            return il2cpp::create_object<app::AreaMapCanvasOverlay__Array>(get_class());
        }
    } // namespace AreaMapCanvasOverlay__Array
} // namespace app::classes::types
