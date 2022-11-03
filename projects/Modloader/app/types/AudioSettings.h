#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioSettings {
        inline app::AudioSettings__Class** type_info = (app::AudioSettings__Class**)(modloader::win::memory::resolve_rva(0x0472FE88));
        inline app::AudioSettings__Class* get_class() {
            return il2cpp::get_class<app::AudioSettings__Class>(type_info, "UnityEngine", "AudioSettings");
        }
        inline app::AudioSettings* create() {
            return il2cpp::create_object<app::AudioSettings>(get_class());
        }
    } // namespace AudioSettings
} // namespace app::classes::types
