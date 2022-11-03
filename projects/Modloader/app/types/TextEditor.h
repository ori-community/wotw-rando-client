#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextEditor {
        inline app::TextEditor__Class** type_info = (app::TextEditor__Class**)(modloader::win::memory::resolve_rva(0x047293D0));
        inline app::TextEditor__Class* get_class() {
            return il2cpp::get_class<app::TextEditor__Class>(type_info, "UnityEngine", "TextEditor");
        }
        inline app::TextEditor* create() {
            return il2cpp::create_object<app::TextEditor>(get_class());
        }
    } // namespace TextEditor
} // namespace app::classes::types
