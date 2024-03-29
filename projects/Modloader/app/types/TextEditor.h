#pragma once
#include <Modloader/app/structs/TextEditor.h>
#include <Modloader/app/structs/TextEditor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextEditor {
        inline app::TextEditor__Class** type_info() {
            static app::TextEditor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextEditor__Class**)(modloader::win::memory::resolve_rva(0x047293D0));
            }
            return cache;
        }
        inline app::TextEditor__Class* get_class() {
            return il2cpp::get_class<app::TextEditor__Class>(type_info(), "UnityEngine", "TextEditor");
        }
        inline app::TextEditor* create() {
            return il2cpp::create_object<app::TextEditor>(get_class());
        }
    } // namespace TextEditor
} // namespace app::classes::types
