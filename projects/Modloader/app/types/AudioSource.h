#pragma once
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/AudioSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSource {
        inline app::AudioSource__Class** type_info() {
            static app::AudioSource__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioSource__Class**)(modloader::win::memory::resolve_rva(0x04750C10));
            }
            return cache;
        }
        inline app::AudioSource__Class* get_class() {
            return il2cpp::get_class<app::AudioSource__Class>(type_info(), "UnityEngine", "AudioSource");
        }
        inline app::AudioSource* create() {
            return il2cpp::create_object<app::AudioSource>(get_class());
        }
    } // namespace AudioSource
} // namespace app::classes::types
