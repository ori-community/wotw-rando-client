#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveToBehaviourNew {
        namespace {
            app::MoveToBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::MoveToBehaviourNew__Class** type_info = &type_info_ref;
        inline app::MoveToBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::MoveToBehaviourNew__Class>(type_info, "Moon", "MoveToBehaviourNew");
        }
        inline app::MoveToBehaviourNew* create() {
            return il2cpp::create_object<app::MoveToBehaviourNew>(get_class());
        }
    } // namespace MoveToBehaviourNew
} // namespace app::classes::types
