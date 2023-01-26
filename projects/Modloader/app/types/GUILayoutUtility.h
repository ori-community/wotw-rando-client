#pragma once
#include <Modloader/app/structs/GUILayoutUtility.h>
#include <Modloader/app/structs/GUILayoutUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutUtility {
        inline app::GUILayoutUtility__Class** type_info() {
            static app::GUILayoutUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUILayoutUtility__Class**)(modloader::win::memory::resolve_rva(0x04751080));
            }
            return cache;
        }
        inline app::GUILayoutUtility__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutUtility__Class>(type_info(), "UnityEngine", "GUILayoutUtility");
        }
        inline app::GUILayoutUtility* create() {
            return il2cpp::create_object<app::GUILayoutUtility>(get_class());
        }
    } // namespace GUILayoutUtility
} // namespace app::classes::types
