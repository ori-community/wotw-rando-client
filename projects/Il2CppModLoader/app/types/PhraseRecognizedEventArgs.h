#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognizedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhraseRecognizedEventArgs__Class** type_info;
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
