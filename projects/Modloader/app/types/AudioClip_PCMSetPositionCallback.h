#pragma once
#include <Modloader/app/structs/AudioClip_PCMSetPositionCallback.h>
#include <Modloader/app/structs/AudioClip_PCMSetPositionCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioClip_PCMSetPositionCallback {
        inline app::AudioClip_PCMSetPositionCallback__Class** type_info() {
            static app::AudioClip_PCMSetPositionCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioClip_PCMSetPositionCallback__Class**)(modloader::win::memory::resolve_rva(0x0475C870));
            }
            return cache;
        }
        inline app::AudioClip_PCMSetPositionCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioClip_PCMSetPositionCallback__Class>(type_info(), "UnityEngine", "AudioClip", "PCMSetPositionCallback");
        }
        inline app::AudioClip_PCMSetPositionCallback* create() {
            return il2cpp::create_object<app::AudioClip_PCMSetPositionCallback>(get_class());
        }
    } // namespace AudioClip_PCMSetPositionCallback
} // namespace app::classes::types
