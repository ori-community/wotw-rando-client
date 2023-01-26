#pragma once
#include <Modloader/app/structs/AudioListenerZoneReference.h>
#include <Modloader/app/structs/AudioListenerZoneReference__Boxed.h>
#include <Modloader/app/structs/AudioListenerZoneReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioListenerZoneReference {
        inline app::AudioListenerZoneReference__Class** type_info() {
            static app::AudioListenerZoneReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioListenerZoneReference__Class**)(modloader::win::memory::resolve_rva(0x04778458));
            }
            return cache;
        }
        inline app::AudioListenerZoneReference__Class* get_class() {
            return il2cpp::get_class<app::AudioListenerZoneReference__Class>(type_info(), "Moon.Wwise", "AudioListenerZoneReference");
        }
        inline app::AudioListenerZoneReference* create() {
            return il2cpp::create_object<app::AudioListenerZoneReference>(get_class());
        }
        inline app::AudioListenerZoneReference__Boxed* box(app::AudioListenerZoneReference value) {
            return il2cpp::box_value<app::AudioListenerZoneReference__Boxed>(get_class(), value);
        }
    } // namespace AudioListenerZoneReference
} // namespace app::classes::types
