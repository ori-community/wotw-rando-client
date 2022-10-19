#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
