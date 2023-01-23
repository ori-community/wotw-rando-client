#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AVProWindowsMediaGUIDisplay__Class.h>
#include <Modloader/app/structs/AVProWindowsMediaGUIDisplay.h>

namespace app::classes::types {
    namespace AVProWindowsMediaGUIDisplay {
        namespace {
            inline app::AVProWindowsMediaGUIDisplay__Class* type_info_ref = nullptr;
        }
        inline app::AVProWindowsMediaGUIDisplay__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaGUIDisplay__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaGUIDisplay__Class>(type_info, "", "AVProWindowsMediaGUIDisplay");
        }
        inline app::AVProWindowsMediaGUIDisplay* create() {
            return il2cpp::create_object<app::AVProWindowsMediaGUIDisplay>(get_class());
        }
    } // namespace AVProWindowsMediaGUIDisplay
} // namespace app::classes::types
