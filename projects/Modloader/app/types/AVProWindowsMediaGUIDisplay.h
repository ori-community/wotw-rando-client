#pragma once
#include <Modloader/app/structs/AVProWindowsMediaGUIDisplay.h>
#include <Modloader/app/structs/AVProWindowsMediaGUIDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaGUIDisplay {
        inline app::AVProWindowsMediaGUIDisplay__Class** type_info() {
            static app::AVProWindowsMediaGUIDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaGUIDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaGUIDisplay__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaGUIDisplay__Class>(type_info(), "", "AVProWindowsMediaGUIDisplay");
        }
        inline app::AVProWindowsMediaGUIDisplay* create() {
            return il2cpp::create_object<app::AVProWindowsMediaGUIDisplay>(get_class());
        }
    } // namespace AVProWindowsMediaGUIDisplay
} // namespace app::classes::types
