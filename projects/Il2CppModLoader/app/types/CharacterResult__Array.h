#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterResult__Array {
        namespace {
            inline app::CharacterResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::CharacterResult__Array__Class** type_info = &type_info_ref;
        inline app::CharacterResult__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterResult__Array__Class>(type_info, "PlayFab.ClientModels", "CharacterResult[]");
        }
        inline app::CharacterResult__Array* create() {
            return il2cpp::create_object<app::CharacterResult__Array>(get_class());
        }
    } // namespace CharacterResult__Array
} // namespace app::classes::types
