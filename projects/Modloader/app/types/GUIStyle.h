#pragma once
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GUIStyle__Array.h>
#include <Modloader/app/structs/GUIStyle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIStyle {
        inline app::GUIStyle__Class** type_info() {
            static app::GUIStyle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIStyle__Class**)(modloader::win::memory::resolve_rva(0x047437D0));
            }
            return cache;
        }
        inline app::GUIStyle__Class* get_class() {
            return il2cpp::get_class<app::GUIStyle__Class>(type_info(), "UnityEngine", "GUIStyle");
        }
        inline app::GUIStyle* create() {
            return il2cpp::create_object<app::GUIStyle>(get_class());
        }
        inline app::GUIStyle__Array* create_array(int size) {
            return il2cpp::array_new<app::GUIStyle__Array>(get_class(), size);
        }
        inline app::GUIStyle__Array* create_array(const std::vector<app::GUIStyle*>& items) {
            return il2cpp::array_new<app::GUIStyle__Array>(get_class(), items);
        }
    } // namespace GUIStyle
} // namespace app::classes::types
