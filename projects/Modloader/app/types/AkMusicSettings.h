#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMusicSettings {
        inline app::AkMusicSettings__Class** type_info = (app::AkMusicSettings__Class**)(modloader::win::memory::resolve_rva(0x04771770));
        inline app::AkMusicSettings__Class* get_class() {
            return il2cpp::get_class<app::AkMusicSettings__Class>(type_info, "", "AkMusicSettings");
        }
        inline app::AkMusicSettings* create() {
            return il2cpp::create_object<app::AkMusicSettings>(get_class());
        }
    } // namespace AkMusicSettings
} // namespace app::classes::types
