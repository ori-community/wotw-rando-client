#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpeechSystemStatus__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpeechSystemStatus__Enum__Class** type_info;
        inline app::SpeechSystemStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpeechSystemStatus__Enum__Class>(type_info, "UnityEngine.Windows.Speech", "SpeechSystemStatus");
        }
        inline app::SpeechSystemStatus__Enum* create() {
            return il2cpp::create_object<app::SpeechSystemStatus__Enum>(get_class());
        }
    } // namespace SpeechSystemStatus__Enum
} // namespace app::classes::types
