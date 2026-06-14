#pragma once
#include <Modloader/app/structs/PhraseRecognizer.h>
#include <Modloader/app/structs/PhraseRecognizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognizer {
        inline app::PhraseRecognizer__Class** type_info() {
            static app::PhraseRecognizer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhraseRecognizer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhraseRecognizer__Class* get_class() {
            return il2cpp::get_class<app::PhraseRecognizer__Class>(type_info(), "UnityEngine.Windows.Speech", "PhraseRecognizer");
        }
        inline app::PhraseRecognizer* create() {
            return il2cpp::create_object<app::PhraseRecognizer>(get_class());
        }
    } // namespace PhraseRecognizer
} // namespace app::classes::types
