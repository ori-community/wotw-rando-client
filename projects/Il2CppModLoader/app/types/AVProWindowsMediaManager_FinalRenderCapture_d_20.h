#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AVProWindowsMediaManager_FinalRenderCapture_d_20 {
        inline app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class** type_info = (app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class**)(modloader::win::memory::resolve_rva(0x0475F458));
        inline app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class* get_class() {
            return il2cpp::get_nested_class<app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class>(type_info, "", "AVProWindowsMediaManager", "<FinalRenderCapture>d__20");
        }
        inline app::AVProWindowsMediaManager_FinalRenderCapture_d_20* create() {
            return il2cpp::create_object<app::AVProWindowsMediaManager_FinalRenderCapture_d_20>(get_class());
        }
    } // namespace AVProWindowsMediaManager_FinalRenderCapture_d_20
} // namespace app::classes::types
