#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationResultDelegate {
        namespace {
            inline app::DictationRecognizer_DictationResultDelegate__Class* type_info_ref = nullptr;
        }
        inline app::DictationRecognizer_DictationResultDelegate__Class** type_info = &type_info_ref;
        inline app::DictationRecognizer_DictationResultDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationResultDelegate__Class>(type_info, "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationResultDelegate");
        }
        inline app::DictationRecognizer_DictationResultDelegate* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationResultDelegate>(get_class());
        }
    } // namespace DictationRecognizer_DictationResultDelegate
} // namespace app::classes::types
