#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioListenerZoneReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioListenerZoneReference__Class** type_info;
        inline app::AudioListenerZoneReference__Class* get_class() {
            return il2cpp::get_class<app::AudioListenerZoneReference__Class>(type_info, "Moon.Wwise", "AudioListenerZoneReference");
        }
        inline app::AudioListenerZoneReference* create() {
            return il2cpp::create_object<app::AudioListenerZoneReference>(get_class());
        }
        inline app::AudioListenerZoneReference__Boxed* box(app::AudioListenerZoneReference value) {
            return il2cpp::box_value<app::AudioListenerZoneReference__Boxed>(get_class(), value);
        }
    } // namespace AudioListenerZoneReference
} // namespace app::classes::types
