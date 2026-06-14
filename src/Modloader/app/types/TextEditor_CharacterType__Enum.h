#pragma once
#include <Modloader/app/structs/TextEditor_CharacterType__Enum.h>
#include <Modloader/app/structs/TextEditor_CharacterType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextEditor_CharacterType__Enum {
        inline app::TextEditor_CharacterType__Enum__Class** type_info() {
            static app::TextEditor_CharacterType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextEditor_CharacterType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextEditor_CharacterType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TextEditor_CharacterType__Enum__Class>(type_info(), "UnityEngine", "TextEditor", "CharacterType");
        }
        inline app::TextEditor_CharacterType__Enum* create() {
            return il2cpp::create_object<app::TextEditor_CharacterType__Enum>(get_class());
        }
    } // namespace TextEditor_CharacterType__Enum
} // namespace app::classes::types
