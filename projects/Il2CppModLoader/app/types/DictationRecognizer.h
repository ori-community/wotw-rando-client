#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DictationRecognizer {
        namespace {
            app::DictationRecognizer__Class* type_info_ref = nullptr;
        }
        app::DictationRecognizer__Class** type_info = &type_info_ref;
        inline app::DictationRecognizer__Class* get_class() {
            return il2cpp::get_class<app::DictationRecognizer__Class>(type_info, "UnityEngine.Windows.Speech", "DictationRecognizer");
        }
        inline app::DictationRecognizer* create() {
            return il2cpp::create_object<app::DictationRecognizer>(get_class());
        }
    } // namespace DictationRecognizer
} // namespace app::classes::types
