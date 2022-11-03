#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AVProWindowsMediaControlPlayOnEnable {
        namespace {
            inline app::AVProWindowsMediaControlPlayOnEnable__Class* type_info_ref = nullptr;
        }
        inline app::AVProWindowsMediaControlPlayOnEnable__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaControlPlayOnEnable__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaControlPlayOnEnable__Class>(type_info, "", "AVProWindowsMediaControlPlayOnEnable");
        }
        inline app::AVProWindowsMediaControlPlayOnEnable* create() {
            return il2cpp::create_object<app::AVProWindowsMediaControlPlayOnEnable>(get_class());
        }
    } // namespace AVProWindowsMediaControlPlayOnEnable
} // namespace app::classes::types
