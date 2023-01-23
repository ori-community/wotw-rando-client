#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterSpriteMirror__Class.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>

namespace app::classes::types {
    namespace CharacterSpriteMirror {
        namespace {
            inline app::CharacterSpriteMirror__Class* type_info_ref = nullptr;
        }
        inline app::CharacterSpriteMirror__Class** type_info = &type_info_ref;
        inline app::CharacterSpriteMirror__Class* get_class() {
            return il2cpp::get_class<app::CharacterSpriteMirror__Class>(type_info, "", "CharacterSpriteMirror");
        }
        inline app::CharacterSpriteMirror* create() {
            return il2cpp::create_object<app::CharacterSpriteMirror>(get_class());
        }
    } // namespace CharacterSpriteMirror
} // namespace app::classes::types
