#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioStateZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioStateZone__Class** type_info;
        inline app::AudioStateZone__Class* get_class() {
            return il2cpp::get_class<app::AudioStateZone__Class>(type_info, "", "AudioStateZone");
        }
        inline app::AudioStateZone* create() {
            return il2cpp::create_object<app::AudioStateZone>(get_class());
        }
        inline app::AudioStateZone__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioStateZone__Array>(get_class(), size);
        }
    } // namespace AudioStateZone
} // namespace app::classes::types
