#pragma once
#include <Modloader/app/structs/AkAudioInputManager.h>
#include <Modloader/app/structs/AkAudioInputManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager {
        inline app::AkAudioInputManager__Class** type_info() {
            static app::AkAudioInputManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkAudioInputManager__Class**)(modloader::win::memory::resolve_rva(0x04727670));
            }
            return cache;
        }
        inline app::AkAudioInputManager__Class* get_class() {
            return il2cpp::get_class<app::AkAudioInputManager__Class>(type_info(), "", "AkAudioInputManager");
        }
        inline app::AkAudioInputManager* create() {
            return il2cpp::create_object<app::AkAudioInputManager>(get_class());
        }
    } // namespace AkAudioInputManager
} // namespace app::classes::types
