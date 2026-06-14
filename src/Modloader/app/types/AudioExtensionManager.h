#pragma once
#include <Modloader/app/structs/AudioExtensionManager.h>
#include <Modloader/app/structs/AudioExtensionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioExtensionManager {
        inline app::AudioExtensionManager__Class** type_info() {
            static app::AudioExtensionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioExtensionManager__Class**)(modloader::win::memory::resolve_rva(0x04762B28));
            }
            return cache;
        }
        inline app::AudioExtensionManager__Class* get_class() {
            return il2cpp::get_class<app::AudioExtensionManager__Class>(type_info(), "UnityEngine", "AudioExtensionManager");
        }
        inline app::AudioExtensionManager* create() {
            return il2cpp::create_object<app::AudioExtensionManager>(get_class());
        }
    } // namespace AudioExtensionManager
} // namespace app::classes::types
