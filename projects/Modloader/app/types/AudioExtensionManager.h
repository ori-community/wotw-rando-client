#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioExtensionManager {
        inline app::AudioExtensionManager__Class** type_info = (app::AudioExtensionManager__Class**)(modloader::win::memory::resolve_rva(0x04762B28));
        inline app::AudioExtensionManager__Class* get_class() {
            return il2cpp::get_class<app::AudioExtensionManager__Class>(type_info, "UnityEngine", "AudioExtensionManager");
        }
        inline app::AudioExtensionManager* create() {
            return il2cpp::create_object<app::AudioExtensionManager>(get_class());
        }
    } // namespace AudioExtensionManager
} // namespace app::classes::types
