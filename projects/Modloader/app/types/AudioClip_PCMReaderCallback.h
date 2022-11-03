#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioClip_PCMReaderCallback {
        inline app::AudioClip_PCMReaderCallback__Class** type_info = (app::AudioClip_PCMReaderCallback__Class**)(modloader::win::memory::resolve_rva(0x0472EF80));
        inline app::AudioClip_PCMReaderCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioClip_PCMReaderCallback__Class>(type_info, "UnityEngine", "AudioClip", "PCMReaderCallback");
        }
        inline app::AudioClip_PCMReaderCallback* create() {
            return il2cpp::create_object<app::AudioClip_PCMReaderCallback>(get_class());
        }
    } // namespace AudioClip_PCMReaderCallback
} // namespace app::classes::types
