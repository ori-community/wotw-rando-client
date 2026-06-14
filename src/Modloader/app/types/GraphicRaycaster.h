#pragma once
#include <Modloader/app/structs/GraphicRaycaster.h>
#include <Modloader/app/structs/GraphicRaycaster__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicRaycaster {
        inline app::GraphicRaycaster__Class** type_info() {
            static app::GraphicRaycaster__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GraphicRaycaster__Class**)(modloader::win::memory::resolve_rva(0x0478C320));
            }
            return cache;
        }
        inline app::GraphicRaycaster__Class* get_class() {
            return il2cpp::get_class<app::GraphicRaycaster__Class>(type_info(), "UnityEngine.UI", "GraphicRaycaster");
        }
        inline app::GraphicRaycaster* create() {
            return il2cpp::create_object<app::GraphicRaycaster>(get_class());
        }
    } // namespace GraphicRaycaster
} // namespace app::classes::types
