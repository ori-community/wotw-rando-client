#pragma once
#include <Modloader/app/structs/AudioListenerZone.h>
#include <Modloader/app/structs/AudioListenerZone__Array.h>
#include <Modloader/app/structs/AudioListenerZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioListenerZone {
        inline app::AudioListenerZone__Class** type_info() {
            static app::AudioListenerZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioListenerZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioListenerZone__Class* get_class() {
            return il2cpp::get_class<app::AudioListenerZone__Class>(type_info(), "Moon.Wwise", "AudioListenerZone");
        }
        inline app::AudioListenerZone* create() {
            return il2cpp::create_object<app::AudioListenerZone>(get_class());
        }
        inline app::AudioListenerZone__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioListenerZone__Array>(get_class(), size);
        }
        inline app::AudioListenerZone__Array* create_array(const std::vector<app::AudioListenerZone*>& items) {
            return il2cpp::array_new<app::AudioListenerZone__Array>(get_class(), items);
        }
    } // namespace AudioListenerZone
} // namespace app::classes::types
