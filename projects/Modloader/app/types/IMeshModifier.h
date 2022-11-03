#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMeshModifier {
        inline app::IMeshModifier__Class** type_info = (app::IMeshModifier__Class**)(modloader::win::memory::resolve_rva(0x0476CB08));
        inline app::IMeshModifier__Class* get_class() {
            return il2cpp::get_class<app::IMeshModifier__Class>(type_info, "UnityEngine.UI", "IMeshModifier");
        }
    } // namespace IMeshModifier
} // namespace app::classes::types
