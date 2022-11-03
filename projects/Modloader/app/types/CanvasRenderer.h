#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanvasRenderer {
        namespace {
            inline app::CanvasRenderer__Class* type_info_ref = nullptr;
        }
        inline app::CanvasRenderer__Class** type_info = &type_info_ref;
        inline app::CanvasRenderer__Class* get_class() {
            return il2cpp::get_class<app::CanvasRenderer__Class>(type_info, "UnityEngine", "CanvasRenderer");
        }
        inline app::CanvasRenderer* create() {
            return il2cpp::create_object<app::CanvasRenderer>(get_class());
        }
    } // namespace CanvasRenderer
} // namespace app::classes::types
