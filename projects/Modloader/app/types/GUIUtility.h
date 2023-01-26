#pragma once
#include <Modloader/app/structs/GUIUtility.h>
#include <Modloader/app/structs/GUIUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIUtility {
        inline app::GUIUtility__Class** type_info() {
            static app::GUIUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIUtility__Class**)(modloader::win::memory::resolve_rva(0x0475E6E0));
            }
            return cache;
        }
        inline app::GUIUtility__Class* get_class() {
            return il2cpp::get_class<app::GUIUtility__Class>(type_info(), "UnityEngine", "GUIUtility");
        }
        inline app::GUIUtility* create() {
            return il2cpp::create_object<app::GUIUtility>(get_class());
        }
    } // namespace GUIUtility
} // namespace app::classes::types
