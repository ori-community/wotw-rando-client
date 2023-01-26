#pragma once
#include <Modloader/app/structs/PhraseRecognizer_PhraseRecognizedDelegate.h>
#include <Modloader/app/structs/PhraseRecognizer_PhraseRecognizedDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognizer_PhraseRecognizedDelegate {
        inline app::PhraseRecognizer_PhraseRecognizedDelegate__Class** type_info() {
            static app::PhraseRecognizer_PhraseRecognizedDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhraseRecognizer_PhraseRecognizedDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhraseRecognizer_PhraseRecognizedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::PhraseRecognizer_PhraseRecognizedDelegate__Class>(type_info(), "UnityEngine.Windows.Speech", "PhraseRecognizer", "PhraseRecognizedDelegate");
        }
        inline app::PhraseRecognizer_PhraseRecognizedDelegate* create() {
            return il2cpp::create_object<app::PhraseRecognizer_PhraseRecognizedDelegate>(get_class());
        }
    } // namespace PhraseRecognizer_PhraseRecognizedDelegate
} // namespace app::classes::types
