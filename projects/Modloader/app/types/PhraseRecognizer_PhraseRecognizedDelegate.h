#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhraseRecognizer_PhraseRecognizedDelegate__Class.h>
#include <Modloader/app/structs/PhraseRecognizer_PhraseRecognizedDelegate.h>

namespace app::classes::types {
    namespace PhraseRecognizer_PhraseRecognizedDelegate {
        namespace {
            inline app::PhraseRecognizer_PhraseRecognizedDelegate__Class* type_info_ref = nullptr;
        }
        inline app::PhraseRecognizer_PhraseRecognizedDelegate__Class** type_info = &type_info_ref;
        inline app::PhraseRecognizer_PhraseRecognizedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::PhraseRecognizer_PhraseRecognizedDelegate__Class>(type_info, "UnityEngine.Windows.Speech", "PhraseRecognizer", "PhraseRecognizedDelegate");
        }
        inline app::PhraseRecognizer_PhraseRecognizedDelegate* create() {
            return il2cpp::create_object<app::PhraseRecognizer_PhraseRecognizedDelegate>(get_class());
        }
    } // namespace PhraseRecognizer_PhraseRecognizedDelegate
} // namespace app::classes::types
