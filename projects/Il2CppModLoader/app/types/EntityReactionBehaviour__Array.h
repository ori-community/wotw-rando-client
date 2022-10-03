#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityReactionBehaviour__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityReactionBehaviour__Array__Class** type_info;
        inline app::EntityReactionBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityReactionBehaviour__Array__Class>(type_info, "", "EntityReactionBehaviour[]");
        }
        inline app::EntityReactionBehaviour__Array* create() {
            return il2cpp::create_object<app::EntityReactionBehaviour__Array>(get_class());
        }
    } // namespace EntityReactionBehaviour__Array
} // namespace app::classes::types
