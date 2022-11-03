#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextEditor_CharacterType__Enum {
        namespace {
            inline app::TextEditor_CharacterType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TextEditor_CharacterType__Enum__Class** type_info = &type_info_ref;
        inline app::TextEditor_CharacterType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TextEditor_CharacterType__Enum__Class>(type_info, "UnityEngine", "TextEditor", "CharacterType");
        }
        inline app::TextEditor_CharacterType__Enum* create() {
            return il2cpp::create_object<app::TextEditor_CharacterType__Enum>(get_class());
        }
    } // namespace TextEditor_CharacterType__Enum
} // namespace app::classes::types
