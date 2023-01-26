#pragma once
#include <Modloader/app/structs/TurtleShell_DamageReactionMultipler__Array.h>
#include <Modloader/app/structs/TurtleShell_DamageReactionMultipler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShell_DamageReactionMultipler__Array {
        inline app::TurtleShell_DamageReactionMultipler__Array__Class** type_info() {
            static app::TurtleShell_DamageReactionMultipler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleShell_DamageReactionMultipler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleShell_DamageReactionMultipler__Array__Class* get_class() {
            return il2cpp::get_class<app::TurtleShell_DamageReactionMultipler__Array__Class>(type_info(), "", "TurtleShell+DamageReactionMultipler[]");
        }
        inline app::TurtleShell_DamageReactionMultipler__Array* create() {
            return il2cpp::create_object<app::TurtleShell_DamageReactionMultipler__Array>(get_class());
        }
    } // namespace TurtleShell_DamageReactionMultipler__Array
} // namespace app::classes::types
