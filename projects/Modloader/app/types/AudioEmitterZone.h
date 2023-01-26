#pragma once
#include <Modloader/app/structs/AudioEmitterZone.h>
#include <Modloader/app/structs/AudioEmitterZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioEmitterZone {
        inline app::AudioEmitterZone__Class** type_info() {
            static app::AudioEmitterZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioEmitterZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioEmitterZone__Class* get_class() {
            return il2cpp::get_class<app::AudioEmitterZone__Class>(type_info(), "Moon.Wwise", "AudioEmitterZone");
        }
        inline app::AudioEmitterZone* create() {
            return il2cpp::create_object<app::AudioEmitterZone>(get_class());
        }
    } // namespace AudioEmitterZone
} // namespace app::classes::types
