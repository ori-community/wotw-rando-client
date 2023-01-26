#pragma once
#include <Modloader/app/structs/AudioListener.h>
#include <Modloader/app/structs/AudioListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioListener {
        inline app::AudioListener__Class** type_info() {
            static app::AudioListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioListener__Class**)(modloader::win::memory::resolve_rva(0x0475F668));
            }
            return cache;
        }
        inline app::AudioListener__Class* get_class() {
            return il2cpp::get_class<app::AudioListener__Class>(type_info(), "UnityEngine", "AudioListener");
        }
        inline app::AudioListener* create() {
            return il2cpp::create_object<app::AudioListener>(get_class());
        }
    } // namespace AudioListener
} // namespace app::classes::types
