#pragma once
#include <Modloader/app/structs/EarlyUpdate_ProcessMouseInWindow.h>
#include <Modloader/app/structs/EarlyUpdate_ProcessMouseInWindow__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_ProcessMouseInWindow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ProcessMouseInWindow {
        inline app::EarlyUpdate_ProcessMouseInWindow__Class** type_info() {
            static app::EarlyUpdate_ProcessMouseInWindow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_ProcessMouseInWindow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_ProcessMouseInWindow__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ProcessMouseInWindow__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ProcessMouseInWindow");
        }
        inline app::EarlyUpdate_ProcessMouseInWindow* create() {
            return il2cpp::create_object<app::EarlyUpdate_ProcessMouseInWindow>(get_class());
        }
        inline app::EarlyUpdate_ProcessMouseInWindow__Boxed* box(app::EarlyUpdate_ProcessMouseInWindow value) {
            return il2cpp::box_value<app::EarlyUpdate_ProcessMouseInWindow__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ProcessMouseInWindow
} // namespace app::classes::types
