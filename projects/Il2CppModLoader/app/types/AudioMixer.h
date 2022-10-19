#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioMixer {
        inline app::AudioMixer__Class** type_info = (app::AudioMixer__Class**)(modloader::win::memory::resolve_rva(0x04757968));
        inline app::AudioMixer__Class* get_class() {
            return il2cpp::get_class<app::AudioMixer__Class>(type_info, "UnityEngine.Audio", "AudioMixer");
        }
        inline app::AudioMixer* create() {
            return il2cpp::create_object<app::AudioMixer>(get_class());
        }
    } // namespace AudioMixer
} // namespace app::classes::types
