#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterStatePuppet__Array__Class.h>
#include <Modloader/app/structs/CharacterStatePuppet__Array.h>

namespace app::classes::types {
    namespace CharacterStatePuppet__Array {
        namespace {
            inline app::CharacterStatePuppet__Array__Class* type_info_ref = nullptr;
        }
        inline app::CharacterStatePuppet__Array__Class** type_info = &type_info_ref;
        inline app::CharacterStatePuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePuppet__Array__Class>(type_info, "", "CharacterStatePuppet[]");
        }
        inline app::CharacterStatePuppet__Array* create() {
            return il2cpp::create_object<app::CharacterStatePuppet__Array>(get_class());
        }
    } // namespace CharacterStatePuppet__Array
} // namespace app::classes::types
