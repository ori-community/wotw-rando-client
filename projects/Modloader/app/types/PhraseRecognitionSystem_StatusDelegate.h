#pragma once
#include <Modloader/app/structs/PhraseRecognitionSystem_StatusDelegate.h>
#include <Modloader/app/structs/PhraseRecognitionSystem_StatusDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognitionSystem_StatusDelegate {
        inline app::PhraseRecognitionSystem_StatusDelegate__Class** type_info() {
            static app::PhraseRecognitionSystem_StatusDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhraseRecognitionSystem_StatusDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhraseRecognitionSystem_StatusDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::PhraseRecognitionSystem_StatusDelegate__Class>(type_info(), "UnityEngine.Windows.Speech", "PhraseRecognitionSystem", "StatusDelegate");
        }
        inline app::PhraseRecognitionSystem_StatusDelegate* create() {
            return il2cpp::create_object<app::PhraseRecognitionSystem_StatusDelegate>(get_class());
        }
    } // namespace PhraseRecognitionSystem_StatusDelegate
} // namespace app::classes::types
