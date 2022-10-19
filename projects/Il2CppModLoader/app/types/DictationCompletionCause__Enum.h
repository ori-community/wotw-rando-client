#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DictationCompletionCause__Enum {
        inline app::DictationCompletionCause__Enum__Class** type_info = (app::DictationCompletionCause__Enum__Class**)(modloader::win::memory::resolve_rva(0x04771BD0));
        inline app::DictationCompletionCause__Enum__Class* get_class() {
            return il2cpp::get_class<app::DictationCompletionCause__Enum__Class>(type_info, "UnityEngine.Windows.Speech", "DictationCompletionCause");
        }
        inline app::DictationCompletionCause__Enum* create() {
            return il2cpp::create_object<app::DictationCompletionCause__Enum>(get_class());
        }
    } // namespace DictationCompletionCause__Enum
} // namespace app::classes::types
