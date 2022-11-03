#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectOffset {
        inline app::RectOffset__Class** type_info = (app::RectOffset__Class**)(modloader::win::memory::resolve_rva(0x0475FA00));
        inline app::RectOffset__Class* get_class() {
            return il2cpp::get_class<app::RectOffset__Class>(type_info, "UnityEngine", "RectOffset");
        }
        inline app::RectOffset* create() {
            return il2cpp::create_object<app::RectOffset>(get_class());
        }
    } // namespace RectOffset
} // namespace app::classes::types
