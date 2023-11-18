#pragma once
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator {
        inline app::ChangeStateInteractionNodeDecorator__Class** type_info() {
            static app::ChangeStateInteractionNodeDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateInteractionNodeDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateInteractionNodeDecorator__Class>(type_info(), "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator");
        }
        inline app::ChangeStateInteractionNodeDecorator* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator>(get_class());
        }
    } // namespace ChangeStateInteractionNodeDecorator
} // namespace app::classes::types
