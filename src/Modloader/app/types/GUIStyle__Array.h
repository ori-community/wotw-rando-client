#pragma once
#include <Modloader/app/structs/GUIStyle__Array.h>
#include <Modloader/app/structs/GUIStyle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIStyle__Array {
        inline app::GUIStyle__Array__Class** type_info() {
            static app::GUIStyle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIStyle__Array__Class**)(modloader::win::memory::resolve_rva(0x0473A560));
            }
            return cache;
        }
        inline app::GUIStyle__Array__Class* get_class() {
            return il2cpp::get_class<app::GUIStyle__Array__Class>(type_info(), "UnityEngine", "GUIStyle[]");
        }
        inline app::GUIStyle__Array* create() {
            return il2cpp::create_object<app::GUIStyle__Array>(get_class());
        }
    } // namespace GUIStyle__Array
} // namespace app::classes::types
