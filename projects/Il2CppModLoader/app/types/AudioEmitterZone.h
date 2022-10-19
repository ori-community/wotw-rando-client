#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioEmitterZone {
        namespace {
            inline app::AudioEmitterZone__Class* type_info_ref = nullptr;
        }
        inline app::AudioEmitterZone__Class** type_info = &type_info_ref;
        inline app::AudioEmitterZone__Class* get_class() {
            return il2cpp::get_class<app::AudioEmitterZone__Class>(type_info, "Moon.Wwise", "AudioEmitterZone");
        }
        inline app::AudioEmitterZone* create() {
            return il2cpp::create_object<app::AudioEmitterZone>(get_class());
        }
    } // namespace AudioEmitterZone
} // namespace app::classes::types
