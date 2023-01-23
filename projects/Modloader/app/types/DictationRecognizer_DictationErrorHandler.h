#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DictationRecognizer_DictationErrorHandler__Class.h>
#include <Modloader/app/structs/DictationRecognizer_DictationErrorHandler.h>

namespace app::classes::types {
    namespace DictationRecognizer_DictationErrorHandler {
        namespace {
            inline app::DictationRecognizer_DictationErrorHandler__Class* type_info_ref = nullptr;
        }
        inline app::DictationRecognizer_DictationErrorHandler__Class** type_info = &type_info_ref;
        inline app::DictationRecognizer_DictationErrorHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::DictationRecognizer_DictationErrorHandler__Class>(type_info, "UnityEngine.Windows.Speech", "DictationRecognizer", "DictationErrorHandler");
        }
        inline app::DictationRecognizer_DictationErrorHandler* create() {
            return il2cpp::create_object<app::DictationRecognizer_DictationErrorHandler>(get_class());
        }
    } // namespace DictationRecognizer_DictationErrorHandler
} // namespace app::classes::types
