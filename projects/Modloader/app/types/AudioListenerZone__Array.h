#pragma once
#include <Modloader/app/structs/AudioListenerZone__Array.h>
#include <Modloader/app/structs/AudioListenerZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioListenerZone__Array {
        inline app::AudioListenerZone__Array__Class** type_info() {
            static app::AudioListenerZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioListenerZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioListenerZone__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioListenerZone__Array__Class>(type_info(), "Moon.Wwise", "AudioListenerZone[]");
        }
        inline app::AudioListenerZone__Array* create() {
            return il2cpp::create_object<app::AudioListenerZone__Array>(get_class());
        }
    } // namespace AudioListenerZone__Array
} // namespace app::classes::types
