#pragma once
#include <Modloader/app/structs/AkSoundEngine.h>
#include <Modloader/app/structs/AkSoundEngine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSoundEngine {
        inline app::AkSoundEngine__Class** type_info() {
            static app::AkSoundEngine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkSoundEngine__Class**)(modloader::win::memory::resolve_rva(0x04797830));
            }
            return cache;
        }
        inline app::AkSoundEngine__Class* get_class() {
            return il2cpp::get_class<app::AkSoundEngine__Class>(type_info(), "", "AkSoundEngine");
        }
        inline app::AkSoundEngine* create() {
            return il2cpp::create_object<app::AkSoundEngine>(get_class());
        }
    } // namespace AkSoundEngine
} // namespace app::classes::types
