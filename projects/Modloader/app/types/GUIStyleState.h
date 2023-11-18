#pragma once
#include <Modloader/app/structs/GUIStyleState.h>
#include <Modloader/app/structs/GUIStyleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIStyleState {
        inline app::GUIStyleState__Class** type_info() {
            static app::GUIStyleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIStyleState__Class**)(modloader::win::memory::resolve_rva(0x0478D5E0));
            }
            return cache;
        }
        inline app::GUIStyleState__Class* get_class() {
            return il2cpp::get_class<app::GUIStyleState__Class>(type_info(), "UnityEngine", "GUIStyleState");
        }
        inline app::GUIStyleState* create() {
            return il2cpp::create_object<app::GUIStyleState>(get_class());
        }
    } // namespace GUIStyleState
} // namespace app::classes::types
