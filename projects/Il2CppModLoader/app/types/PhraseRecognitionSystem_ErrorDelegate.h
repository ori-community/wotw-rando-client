#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognitionSystem_ErrorDelegate {
        namespace {
            app::PhraseRecognitionSystem_ErrorDelegate__Class* type_info_ref = nullptr;
        }
        app::PhraseRecognitionSystem_ErrorDelegate__Class** type_info = &type_info_ref;
        inline app::PhraseRecognitionSystem_ErrorDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::PhraseRecognitionSystem_ErrorDelegate__Class>(type_info, "UnityEngine.Windows.Speech", "PhraseRecognitionSystem", "ErrorDelegate");
        }
        inline app::PhraseRecognitionSystem_ErrorDelegate* create() {
            return il2cpp::create_object<app::PhraseRecognitionSystem_ErrorDelegate>(get_class());
        }
    } // namespace PhraseRecognitionSystem_ErrorDelegate
} // namespace app::classes::types
