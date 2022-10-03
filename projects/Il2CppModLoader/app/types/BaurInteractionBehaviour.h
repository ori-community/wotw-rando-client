#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaurInteractionBehaviour {
        namespace {
            app::BaurInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::BaurInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::BaurInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaurInteractionBehaviour__Class>(type_info, "", "BaurInteractionBehaviour");
        }
        inline app::BaurInteractionBehaviour* create() {
            return il2cpp::create_object<app::BaurInteractionBehaviour>(get_class());
        }
    } // namespace BaurInteractionBehaviour
} // namespace app::classes::types
