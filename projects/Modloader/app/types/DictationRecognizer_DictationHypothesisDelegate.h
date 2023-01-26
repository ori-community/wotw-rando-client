#pragma once
#include <Modloader/app/structs/DictationRecognizer_DictationHypothesisDelegate.h>
#include <Modloader/app/structs/DictationRecognizer_DictationHypothesisDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationHypothesisDelegate {
        inline app::DictationRecognizer_DictationHypothesisDelegate__Class** type_info() {
            static app::DictationRecognizer_DictationHypothesisDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DictationRecognizer_DictationHypothesisDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DictationRecognizer_DictationHypothesisDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationHypothesisDelegate__Class>(type_info(), "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationHypothesisDelegate");
        }
        inline app::DictationRecognizer_DictationHypothesisDelegate* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationHypothesisDelegate>(get_class());
        }
    } // namespace DictationRecognizer_DictationHypothesisDelegate
} // namespace app::classes::types
