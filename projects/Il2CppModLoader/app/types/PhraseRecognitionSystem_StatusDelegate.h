#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognitionSystem_StatusDelegate {
        namespace {
            app::PhraseRecognitionSystem_StatusDelegate__Class* type_info_ref = nullptr;
        }
        app::PhraseRecognitionSystem_StatusDelegate__Class** type_info = &type_info_ref;
        inline app::PhraseRecognitionSystem_StatusDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::PhraseRecognitionSystem_StatusDelegate__Class>(type_info, "UnityEngine.Windows.Speech", "PhraseRecognitionSystem", "StatusDelegate");
        }
        inline app::PhraseRecognitionSystem_StatusDelegate* create() {
            return il2cpp::create_object<app::PhraseRecognitionSystem_StatusDelegate>(get_class());
        }
    } // namespace PhraseRecognitionSystem_StatusDelegate
} // namespace app::classes::types
