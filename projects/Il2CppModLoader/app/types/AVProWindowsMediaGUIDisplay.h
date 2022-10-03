#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaGUIDisplay {
        namespace {
            app::AVProWindowsMediaGUIDisplay__Class* type_info_ref = nullptr;
        }
        app::AVProWindowsMediaGUIDisplay__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaGUIDisplay__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaGUIDisplay__Class>(type_info, "", "AVProWindowsMediaGUIDisplay");
        }
        inline app::AVProWindowsMediaGUIDisplay* create() {
            return il2cpp::create_object<app::AVProWindowsMediaGUIDisplay>(get_class());
        }
    } // namespace AVProWindowsMediaGUIDisplay
} // namespace app::classes::types
