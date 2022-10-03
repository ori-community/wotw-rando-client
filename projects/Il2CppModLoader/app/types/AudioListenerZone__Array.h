#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioListenerZone__Array {
        namespace {
            app::AudioListenerZone__Array__Class* type_info_ref = nullptr;
        }
        app::AudioListenerZone__Array__Class** type_info = &type_info_ref;
        inline app::AudioListenerZone__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioListenerZone__Array__Class>(type_info, "Moon.Wwise", "AudioListenerZone[]");
        }
        inline app::AudioListenerZone__Array* create() {
            return il2cpp::create_object<app::AudioListenerZone__Array>(get_class());
        }
    } // namespace AudioListenerZone__Array
} // namespace app::classes::types
