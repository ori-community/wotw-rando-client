#pragma once
#include <Modloader/app/structs/DictationRecognizer_DictationCompletedDelegate.h>
#include <Modloader/app/structs/DictationRecognizer_DictationCompletedDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationCompletedDelegate {
        inline app::DictationRecognizer_DictationCompletedDelegate__Class** type_info() {
            static app::DictationRecognizer_DictationCompletedDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DictationRecognizer_DictationCompletedDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DictationRecognizer_DictationCompletedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationCompletedDelegate__Class>(type_info(), "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationCompletedDelegate");
        }
        inline app::DictationRecognizer_DictationCompletedDelegate* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationCompletedDelegate>(get_class());
        }
    } // namespace DictationRecognizer_DictationCompletedDelegate
} // namespace app::classes::types
