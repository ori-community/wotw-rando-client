#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhraseRecognizedEventArgs {
        inline app::PhraseRecognizedEventArgs__Class** type_info = (app::PhraseRecognizedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473AE38));
        inline app::PhraseRecognizedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PhraseRecognizedEventArgs__Class>(type_info, "UnityEngine.Windows.Speech", "PhraseRecognizedEventArgs");
        }
        inline app::PhraseRecognizedEventArgs* create() {
            return il2cpp::create_object<app::PhraseRecognizedEventArgs>(get_class());
        }
        inline app::PhraseRecognizedEventArgs__Boxed* box(app::PhraseRecognizedEventArgs value) {
            return il2cpp::box_value<app::PhraseRecognizedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PhraseRecognizedEventArgs
} // namespace app::classes::types
