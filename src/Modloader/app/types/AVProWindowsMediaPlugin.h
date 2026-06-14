#pragma once
#include <Modloader/app/structs/AVProWindowsMediaPlugin.h>
#include <Modloader/app/structs/AVProWindowsMediaPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaPlugin {
        inline app::AVProWindowsMediaPlugin__Class** type_info() {
            static app::AVProWindowsMediaPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaPlugin__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaPlugin__Class>(type_info(), "", "AVProWindowsMediaPlugin");
        }
        inline app::AVProWindowsMediaPlugin* create() {
            return il2cpp::create_object<app::AVProWindowsMediaPlugin>(get_class());
        }
    } // namespace AVProWindowsMediaPlugin
} // namespace app::classes::types
