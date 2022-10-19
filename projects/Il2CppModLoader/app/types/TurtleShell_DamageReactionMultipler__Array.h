#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShell_DamageReactionMultipler__Array {
        namespace {
            inline app::TurtleShell_DamageReactionMultipler__Array__Class* type_info_ref = nullptr;
        }
        inline app::TurtleShell_DamageReactionMultipler__Array__Class** type_info = &type_info_ref;
        inline app::TurtleShell_DamageReactionMultipler__Array__Class* get_class() {
            return il2cpp::get_class<app::TurtleShell_DamageReactionMultipler__Array__Class>(type_info, "", "TurtleShell+DamageReactionMultipler[]");
        }
        inline app::TurtleShell_DamageReactionMultipler__Array* create() {
            return il2cpp::create_object<app::TurtleShell_DamageReactionMultipler__Array>(get_class());
        }
    } // namespace TurtleShell_DamageReactionMultipler__Array
} // namespace app::classes::types
