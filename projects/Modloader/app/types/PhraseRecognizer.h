#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhraseRecognizer__Class.h>
#include <Modloader/app/structs/PhraseRecognizer.h>

namespace app::classes::types {
    namespace PhraseRecognizer {
        namespace {
            inline app::PhraseRecognizer__Class* type_info_ref = nullptr;
        }
        inline app::PhraseRecognizer__Class** type_info = &type_info_ref;
        inline app::PhraseRecognizer__Class* get_class() {
            return il2cpp::get_class<app::PhraseRecognizer__Class>(type_info, "UnityEngine.Windows.Speech", "PhraseRecognizer");
        }
        inline app::PhraseRecognizer* create() {
            return il2cpp::create_object<app::PhraseRecognizer>(get_class());
        }
    } // namespace PhraseRecognizer
} // namespace app::classes::types
