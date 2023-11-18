#pragma once
#include <Modloader/app/structs/ILayoutElement.h>
#include <Modloader/app/structs/ILayoutElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILayoutElement {
        inline app::ILayoutElement__Class** type_info() {
            static app::ILayoutElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILayoutElement__Class**)(modloader::win::memory::resolve_rva(0x0471CA88));
            }
            return cache;
        }
        inline app::ILayoutElement__Class* get_class() {
            return il2cpp::get_class<app::ILayoutElement__Class>(type_info(), "UnityEngine.UI", "ILayoutElement");
        }
    } // namespace ILayoutElement
} // namespace app::classes::types
