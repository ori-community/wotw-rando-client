#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionNodeStatus__Enum {
        namespace {
            app::InteractionNodeStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::InteractionNodeStatus__Enum__Class** type_info = &type_info_ref;
        inline app::InteractionNodeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::InteractionNodeStatus__Enum__Class>(type_info, "Moon.InteractionGraph", "InteractionNodeStatus");
        }
        inline app::InteractionNodeStatus__Enum* create() {
            return il2cpp::create_object<app::InteractionNodeStatus__Enum>(get_class());
        }
    } // namespace InteractionNodeStatus__Enum
} // namespace app::classes::types
