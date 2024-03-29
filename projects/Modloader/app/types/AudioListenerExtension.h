#pragma once
#include <Modloader/app/structs/AudioListenerExtension.h>
#include <Modloader/app/structs/AudioListenerExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioListenerExtension {
        inline app::AudioListenerExtension__Class** type_info() {
            static app::AudioListenerExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioListenerExtension__Class**)(modloader::win::memory::resolve_rva(0x04729E18));
            }
            return cache;
        }
        inline app::AudioListenerExtension__Class* get_class() {
            return il2cpp::get_class<app::AudioListenerExtension__Class>(type_info(), "UnityEngine", "AudioListenerExtension");
        }
        inline app::AudioListenerExtension* create() {
            return il2cpp::create_object<app::AudioListenerExtension>(get_class());
        }
    } // namespace AudioListenerExtension
} // namespace app::classes::types
