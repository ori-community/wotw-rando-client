#pragma once
#include <Modloader/app/structs/DictationRecognizer_DictationErrorHandler.h>
#include <Modloader/app/structs/DictationRecognizer_DictationErrorHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationErrorHandler {
        inline app::DictationRecognizer_DictationErrorHandler__Class** type_info() {
            static app::DictationRecognizer_DictationErrorHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DictationRecognizer_DictationErrorHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DictationRecognizer_DictationErrorHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationErrorHandler__Class>(type_info(), "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationErrorHandler");
        }
        inline app::DictationRecognizer_DictationErrorHandler* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationErrorHandler>(get_class());
        }
    } // namespace DictationRecognizer_DictationErrorHandler
} // namespace app::classes::types
