#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityReactionBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityReactionBehaviour__Class** type_info;
        inline app::EntityReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::EntityReactionBehaviour__Class>(type_info, "", "EntityReactionBehaviour");
        }
        inline app::EntityReactionBehaviour* create() {
            return il2cpp::create_object<app::EntityReactionBehaviour>(get_class());
        }
        inline app::EntityReactionBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityReactionBehaviour__Array>(get_class(), size);
        }
    } // namespace EntityReactionBehaviour
} // namespace app::classes::types
