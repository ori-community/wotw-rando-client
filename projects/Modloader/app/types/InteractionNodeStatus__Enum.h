#pragma once
#include <Modloader/app/structs/InteractionNodeStatus__Enum.h>
#include <Modloader/app/structs/InteractionNodeStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionNodeStatus__Enum {
        inline app::InteractionNodeStatus__Enum__Class** type_info() {
            static app::InteractionNodeStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionNodeStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionNodeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::InteractionNodeStatus__Enum__Class>(type_info(), "Moon.InteractionGraph", "InteractionNodeStatus");
        }
        inline app::InteractionNodeStatus__Enum* create() {
            return il2cpp::create_object<app::InteractionNodeStatus__Enum>(get_class());
        }
    } // namespace InteractionNodeStatus__Enum
} // namespace app::classes::types
