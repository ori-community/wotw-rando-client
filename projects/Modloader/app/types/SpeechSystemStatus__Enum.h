#pragma once
#include <Modloader/app/structs/SpeechSystemStatus__Enum.h>
#include <Modloader/app/structs/SpeechSystemStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpeechSystemStatus__Enum {
        inline app::SpeechSystemStatus__Enum__Class** type_info() {
            static app::SpeechSystemStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpeechSystemStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x047647B0));
            }
            return cache;
        }
        inline app::SpeechSystemStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpeechSystemStatus__Enum__Class>(type_info(), "UnityEngine.Windows.Speech", "SpeechSystemStatus");
        }
        inline app::SpeechSystemStatus__Enum* create() {
            return il2cpp::create_object<app::SpeechSystemStatus__Enum>(get_class());
        }
    } // namespace SpeechSystemStatus__Enum
} // namespace app::classes::types
