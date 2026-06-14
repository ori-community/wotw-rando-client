#pragma once
#include <Modloader/app/structs/BaurInteractionBehaviour.h>
#include <Modloader/app/structs/BaurInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaurInteractionBehaviour {
        inline app::BaurInteractionBehaviour__Class** type_info() {
            static app::BaurInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaurInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaurInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaurInteractionBehaviour__Class>(type_info(), "", "BaurInteractionBehaviour");
        }
        inline app::BaurInteractionBehaviour* create() {
            return il2cpp::create_object<app::BaurInteractionBehaviour>(get_class());
        }
    } // namespace BaurInteractionBehaviour
} // namespace app::classes::types
