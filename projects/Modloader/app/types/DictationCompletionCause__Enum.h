#pragma once
#include <Modloader/app/structs/DictationCompletionCause__Enum.h>
#include <Modloader/app/structs/DictationCompletionCause__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictationCompletionCause__Enum {
        inline app::DictationCompletionCause__Enum__Class** type_info() {
            static app::DictationCompletionCause__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DictationCompletionCause__Enum__Class**)(modloader::win::memory::resolve_rva(0x04771BD0));
            }
            return cache;
        }
        inline app::DictationCompletionCause__Enum__Class* get_class() {
            return il2cpp::get_class<app::DictationCompletionCause__Enum__Class>(type_info(), "UnityEngine.Windows.Speech", "DictationCompletionCause");
        }
        inline app::DictationCompletionCause__Enum* create() {
            return il2cpp::create_object<app::DictationCompletionCause__Enum>(get_class());
        }
    } // namespace DictationCompletionCause__Enum
} // namespace app::classes::types
