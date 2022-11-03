#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioClip_PCMSetPositionCallback {
        inline app::AudioClip_PCMSetPositionCallback__Class** type_info = (app::AudioClip_PCMSetPositionCallback__Class**)(modloader::win::memory::resolve_rva(0x0475C870));
        inline app::AudioClip_PCMSetPositionCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioClip_PCMSetPositionCallback__Class>(type_info, "UnityEngine", "AudioClip", "PCMSetPositionCallback");
        }
        inline app::AudioClip_PCMSetPositionCallback* create() {
            return il2cpp::create_object<app::AudioClip_PCMSetPositionCallback>(get_class());
        }
    } // namespace AudioClip_PCMSetPositionCallback
} // namespace app::classes::types
