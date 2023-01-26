#pragma once
#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/GUILayoutOption__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutOption__Array {
        inline app::GUILayoutOption__Array__Class** type_info() {
            static app::GUILayoutOption__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUILayoutOption__Array__Class**)(modloader::win::memory::resolve_rva(0x04770280));
            }
            return cache;
        }
        inline app::GUILayoutOption__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutOption__Array__Class>(type_info(), "UnityEngine", "GUILayoutOption[]");
        }
        inline app::GUILayoutOption__Array* create() {
            return il2cpp::create_object<app::GUILayoutOption__Array>(get_class());
        }
    } // namespace GUILayoutOption__Array
} // namespace app::classes::types
