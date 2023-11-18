#pragma once
#include <Modloader/app/structs/AVProWindowsMediaControlPlayOnEnable.h>
#include <Modloader/app/structs/AVProWindowsMediaControlPlayOnEnable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaControlPlayOnEnable {
        inline app::AVProWindowsMediaControlPlayOnEnable__Class** type_info() {
            static app::AVProWindowsMediaControlPlayOnEnable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaControlPlayOnEnable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaControlPlayOnEnable__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaControlPlayOnEnable__Class>(type_info(), "", "AVProWindowsMediaControlPlayOnEnable");
        }
        inline app::AVProWindowsMediaControlPlayOnEnable* create() {
            return il2cpp::create_object<app::AVProWindowsMediaControlPlayOnEnable>(get_class());
        }
    } // namespace AVProWindowsMediaControlPlayOnEnable
} // namespace app::classes::types
