#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanvasScaler {
        namespace {
            inline app::CanvasScaler__Class* type_info_ref = nullptr;
        }
        inline app::CanvasScaler__Class** type_info = &type_info_ref;
        inline app::CanvasScaler__Class* get_class() {
            return il2cpp::get_class<app::CanvasScaler__Class>(type_info, "UnityEngine.UI", "CanvasScaler");
        }
        inline app::CanvasScaler* create() {
            return il2cpp::create_object<app::CanvasScaler>(get_class());
        }
    } // namespace CanvasScaler
} // namespace app::classes::types
