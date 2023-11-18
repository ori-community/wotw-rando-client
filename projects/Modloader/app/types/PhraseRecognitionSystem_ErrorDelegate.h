#pragma once
#include <Modloader/app/structs/PhraseRecognitionSystem_ErrorDelegate.h>
#include <Modloader/app/structs/PhraseRecognitionSystem_ErrorDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognitionSystem_ErrorDelegate {
        inline app::PhraseRecognitionSystem_ErrorDelegate__Class** type_info() {
            static app::PhraseRecognitionSystem_ErrorDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhraseRecognitionSystem_ErrorDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhraseRecognitionSystem_ErrorDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::PhraseRecognitionSystem_ErrorDelegate__Class>(type_info(), "UnityEngine.Windows.Speech", "PhraseRecognitionSystem", "ErrorDelegate");
        }
        inline app::PhraseRecognitionSystem_ErrorDelegate* create() {
            return il2cpp::create_object<app::PhraseRecognitionSystem_ErrorDelegate>(get_class());
        }
    } // namespace PhraseRecognitionSystem_ErrorDelegate
} // namespace app::classes::types
