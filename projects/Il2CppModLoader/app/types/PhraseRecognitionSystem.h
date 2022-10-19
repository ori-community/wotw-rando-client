#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhraseRecognitionSystem {
        inline app::PhraseRecognitionSystem__Class** type_info = (app::PhraseRecognitionSystem__Class**)(modloader::win::memory::resolve_rva(0x04772628));
        inline app::PhraseRecognitionSystem__Class* get_class() {
            return il2cpp::get_class<app::PhraseRecognitionSystem__Class>(type_info, "UnityEngine.Windows.Speech", "PhraseRecognitionSystem");
        }
        inline app::PhraseRecognitionSystem* create() {
            return il2cpp::create_object<app::PhraseRecognitionSystem>(get_class());
        }
    } // namespace PhraseRecognitionSystem
} // namespace app::classes::types
