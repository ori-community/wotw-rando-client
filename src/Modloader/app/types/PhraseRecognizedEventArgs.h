#pragma once
#include <Modloader/app/structs/PhraseRecognizedEventArgs.h>
#include <Modloader/app/structs/PhraseRecognizedEventArgs__Boxed.h>
#include <Modloader/app/structs/PhraseRecognizedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhraseRecognizedEventArgs {
        inline app::PhraseRecognizedEventArgs__Class** type_info() {
            static app::PhraseRecognizedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhraseRecognizedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473AE38));
            }
            return cache;
        }
        inline app::PhraseRecognizedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PhraseRecognizedEventArgs__Class>(type_info(), "UnityEngine.Windows.Speech", "PhraseRecognizedEventArgs");
        }
        inline app::PhraseRecognizedEventArgs* create() {
            return il2cpp::create_object<app::PhraseRecognizedEventArgs>(get_class());
        }
        inline app::PhraseRecognizedEventArgs__Boxed* box(app::PhraseRecognizedEventArgs value) {
            return il2cpp::box_value<app::PhraseRecognizedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PhraseRecognizedEventArgs
} // namespace app::classes::types
