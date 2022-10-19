#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioFormatDelegate__Array {
        namespace {
            inline app::AkAudioInputManager_AudioFormatDelegate__Array__Class* type_info_ref = nullptr;
        }
        inline app::AkAudioInputManager_AudioFormatDelegate__Array__Class** type_info = &type_info_ref;
        inline app::AkAudioInputManager_AudioFormatDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::AkAudioInputManager_AudioFormatDelegate__Array__Class>(type_info, "", "AkAudioInputManager+AudioFormatDelegate[]");
        }
        inline app::AkAudioInputManager_AudioFormatDelegate__Array* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioFormatDelegate__Array>(get_class());
        }
    } // namespace AkAudioInputManager_AudioFormatDelegate__Array
} // namespace app::classes::types
