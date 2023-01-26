#pragma once
#include <Modloader/app/structs/LayoutUtility.h>
#include <Modloader/app/structs/LayoutUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayoutUtility {
        inline app::LayoutUtility__Class** type_info() {
            static app::LayoutUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LayoutUtility__Class**)(modloader::win::memory::resolve_rva(0x04799B80));
            }
            return cache;
        }
        inline app::LayoutUtility__Class* get_class() {
            return il2cpp::get_class<app::LayoutUtility__Class>(type_info(), "UnityEngine.UI", "LayoutUtility");
        }
        inline app::LayoutUtility* create() {
            return il2cpp::create_object<app::LayoutUtility>(get_class());
        }
    } // namespace LayoutUtility
} // namespace app::classes::types
