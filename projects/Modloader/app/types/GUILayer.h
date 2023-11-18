#pragma once
#include <Modloader/app/structs/GUILayer.h>
#include <Modloader/app/structs/GUILayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayer {
        inline app::GUILayer__Class** type_info() {
            static app::GUILayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUILayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUILayer__Class* get_class() {
            return il2cpp::get_class<app::GUILayer__Class>(type_info(), "UnityEngine", "GUILayer");
        }
        inline app::GUILayer* create() {
            return il2cpp::create_object<app::GUILayer>(get_class());
        }
    } // namespace GUILayer
} // namespace app::classes::types
