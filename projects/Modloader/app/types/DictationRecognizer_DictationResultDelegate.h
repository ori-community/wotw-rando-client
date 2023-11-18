#pragma once
#include <Modloader/app/structs/DictationRecognizer_DictationResultDelegate.h>
#include <Modloader/app/structs/DictationRecognizer_DictationResultDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationResultDelegate {
        inline app::DictationRecognizer_DictationResultDelegate__Class** type_info() {
            static app::DictationRecognizer_DictationResultDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DictationRecognizer_DictationResultDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DictationRecognizer_DictationResultDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationResultDelegate__Class>(type_info(), "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationResultDelegate");
        }
        inline app::DictationRecognizer_DictationResultDelegate* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationResultDelegate>(get_class());
        }
    } // namespace DictationRecognizer_DictationResultDelegate
} // namespace app::classes::types
