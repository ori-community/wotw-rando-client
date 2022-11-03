#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILayoutElement {
        inline app::ILayoutElement__Class** type_info = (app::ILayoutElement__Class**)(modloader::win::memory::resolve_rva(0x0471CA88));
        inline app::ILayoutElement__Class* get_class() {
            return il2cpp::get_class<app::ILayoutElement__Class>(type_info, "UnityEngine.UI", "ILayoutElement");
        }
    } // namespace ILayoutElement
} // namespace app::classes::types
