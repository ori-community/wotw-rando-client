#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioSource {
        inline app::AudioSource__Class** type_info = (app::AudioSource__Class**)(modloader::win::memory::resolve_rva(0x04750C10));
        inline app::AudioSource__Class* get_class() {
            return il2cpp::get_class<app::AudioSource__Class>(type_info, "UnityEngine", "AudioSource");
        }
        inline app::AudioSource* create() {
            return il2cpp::create_object<app::AudioSource>(get_class());
        }
    } // namespace AudioSource
} // namespace app::classes::types
