#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterState__Array__Class.h>
#include <Modloader/app/structs/CharacterState__Array.h>

namespace app::classes::types {
    namespace CharacterState__Array {
        namespace {
            inline app::CharacterState__Array__Class* type_info_ref = nullptr;
        }
        inline app::CharacterState__Array__Class** type_info = &type_info_ref;
        inline app::CharacterState__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterState__Array__Class>(type_info, "", "CharacterState[]");
        }
        inline app::CharacterState__Array* create() {
            return il2cpp::create_object<app::CharacterState__Array>(get_class());
        }
    } // namespace CharacterState__Array
} // namespace app::classes::types
