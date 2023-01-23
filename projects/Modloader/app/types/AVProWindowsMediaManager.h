#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AVProWindowsMediaManager__Class.h>
#include <Modloader/app/structs/AVProWindowsMediaManager.h>

namespace app::classes::types {
    namespace AVProWindowsMediaManager {
        inline app::AVProWindowsMediaManager__Class** type_info = (app::AVProWindowsMediaManager__Class**)(modloader::win::memory::resolve_rva(0x047335D8));
        inline app::AVProWindowsMediaManager__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaManager__Class>(type_info, "", "AVProWindowsMediaManager");
        }
        inline app::AVProWindowsMediaManager* create() {
            return il2cpp::create_object<app::AVProWindowsMediaManager>(get_class());
        }
    } // namespace AVProWindowsMediaManager
} // namespace app::classes::types
