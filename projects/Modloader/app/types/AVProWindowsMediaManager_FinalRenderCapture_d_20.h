#pragma once
#include <Modloader/app/structs/AVProWindowsMediaManager_FinalRenderCapture_d_20.h>
#include <Modloader/app/structs/AVProWindowsMediaManager_FinalRenderCapture_d_20__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaManager_FinalRenderCapture_d_20 {
        inline app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class** type_info() {
            static app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class**)(modloader::win::memory::resolve_rva(0x0475F458));
            }
            return cache;
        }
        inline app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class* get_class() {
            return il2cpp::get_nested_class<app::AVProWindowsMediaManager_FinalRenderCapture_d_20__Class>(type_info(), "", "AVProWindowsMediaManager", "<FinalRenderCapture>d__20");
        }
        inline app::AVProWindowsMediaManager_FinalRenderCapture_d_20* create() {
            return il2cpp::create_object<app::AVProWindowsMediaManager_FinalRenderCapture_d_20>(get_class());
        }
    } // namespace AVProWindowsMediaManager_FinalRenderCapture_d_20
} // namespace app::classes::types
