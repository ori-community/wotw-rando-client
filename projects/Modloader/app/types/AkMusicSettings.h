#pragma once
#include <Modloader/app/structs/AkMusicSettings.h>
#include <Modloader/app/structs/AkMusicSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMusicSettings {
        inline app::AkMusicSettings__Class** type_info() {
            static app::AkMusicSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMusicSettings__Class**)(modloader::win::memory::resolve_rva(0x04771770));
            }
            return cache;
        }
        inline app::AkMusicSettings__Class* get_class() {
            return il2cpp::get_class<app::AkMusicSettings__Class>(type_info(), "", "AkMusicSettings");
        }
        inline app::AkMusicSettings* create() {
            return il2cpp::create_object<app::AkMusicSettings>(get_class());
        }
    } // namespace AkMusicSettings
} // namespace app::classes::types
