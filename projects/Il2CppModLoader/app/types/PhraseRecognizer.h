#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognizer {
        namespace {
            app::PhraseRecognizer__Class* type_info_ref = nullptr;
        }
        app::PhraseRecognizer__Class** type_info = &type_info_ref;
        inline app::PhraseRecognizer__Class* get_class() {
            return il2cpp::get_class<app::PhraseRecognizer__Class>(type_info, "UnityEngine.Windows.Speech", "PhraseRecognizer");
        }
        inline app::PhraseRecognizer* create() {
            return il2cpp::create_object<app::PhraseRecognizer>(get_class());
        }
    } // namespace PhraseRecognizer
} // namespace app::classes::types
