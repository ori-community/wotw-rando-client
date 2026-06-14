#pragma once
#include <Modloader/app/structs/DictationRecognizer.h>
#include <Modloader/app/structs/DictationRecognizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictationRecognizer {
        inline app::DictationRecognizer__Class** type_info() {
            static app::DictationRecognizer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DictationRecognizer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DictationRecognizer__Class* get_class() {
            return il2cpp::get_class<app::DictationRecognizer__Class>(type_info(), "UnityEngine.Windows.Speech", "DictationRecognizer");
        }
        inline app::DictationRecognizer* create() {
            return il2cpp::create_object<app::DictationRecognizer>(get_class());
        }
    } // namespace DictationRecognizer
} // namespace app::classes::types
