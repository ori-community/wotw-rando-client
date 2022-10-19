#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationHypothesisDelegate {
        namespace {
            inline app::DictationRecognizer_DictationHypothesisDelegate__Class* type_info_ref = nullptr;
        }
        inline app::DictationRecognizer_DictationHypothesisDelegate__Class** type_info = &type_info_ref;
        inline app::DictationRecognizer_DictationHypothesisDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationHypothesisDelegate__Class>(type_info, "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationHypothesisDelegate");
        }
        inline app::DictationRecognizer_DictationHypothesisDelegate* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationHypothesisDelegate>(get_class());
        }
    } // namespace DictationRecognizer_DictationHypothesisDelegate
} // namespace app::classes::types
