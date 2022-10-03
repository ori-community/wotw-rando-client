#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationCompletedDelegate {
        namespace {
            app::DictationRecognizer_DictationCompletedDelegate__Class* type_info_ref = nullptr;
        }
        app::DictationRecognizer_DictationCompletedDelegate__Class** type_info = &type_info_ref;
        inline app::DictationRecognizer_DictationCompletedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationCompletedDelegate__Class>(type_info, "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationCompletedDelegate");
        }
        inline app::DictationRecognizer_DictationCompletedDelegate* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationCompletedDelegate>(get_class());
        }
    } // namespace DictationRecognizer_DictationCompletedDelegate
} // namespace app::classes::types
