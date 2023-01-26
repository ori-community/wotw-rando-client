#pragma once
#include <Modloader/app/structs/CharacterSpriteMirror_MirrorMode__Enum.h>
#include <Modloader/app/structs/CharacterSpriteMirror_MirrorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterSpriteMirror_MirrorMode__Enum {
        inline app::CharacterSpriteMirror_MirrorMode__Enum__Class** type_info() {
            static app::CharacterSpriteMirror_MirrorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterSpriteMirror_MirrorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterSpriteMirror_MirrorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterSpriteMirror_MirrorMode__Enum__Class>(type_info(), "", "CharacterSpriteMirror", "MirrorMode");
        }
        inline app::CharacterSpriteMirror_MirrorMode__Enum* create() {
            return il2cpp::create_object<app::CharacterSpriteMirror_MirrorMode__Enum>(get_class());
        }
    } // namespace CharacterSpriteMirror_MirrorMode__Enum
} // namespace app::classes::types
