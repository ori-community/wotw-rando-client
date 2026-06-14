#pragma once
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/CharacterSpriteMirror__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterSpriteMirror {
        inline app::CharacterSpriteMirror__Class** type_info() {
            static app::CharacterSpriteMirror__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterSpriteMirror__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterSpriteMirror__Class* get_class() {
            return il2cpp::get_class<app::CharacterSpriteMirror__Class>(type_info(), "", "CharacterSpriteMirror");
        }
        inline app::CharacterSpriteMirror* create() {
            return il2cpp::create_object<app::CharacterSpriteMirror>(get_class());
        }
    } // namespace CharacterSpriteMirror
} // namespace app::classes::types
