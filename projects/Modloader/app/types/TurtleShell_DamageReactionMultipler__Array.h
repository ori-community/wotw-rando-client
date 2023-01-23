#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurtleShell_DamageReactionMultipler__Array__Class.h>
#include <Modloader/app/structs/TurtleShell_DamageReactionMultipler__Array.h>

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
