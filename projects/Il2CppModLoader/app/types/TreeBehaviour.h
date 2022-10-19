#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TreeBehaviour {
        namespace {
            inline app::TreeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TreeBehaviour__Class** type_info = &type_info_ref;
        inline app::TreeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TreeBehaviour__Class>(type_info, "Moon.BehaviourSystem", "TreeBehaviour");
        }
        inline app::TreeBehaviour* create() {
            return il2cpp::create_object<app::TreeBehaviour>(get_class());
        }
    } // namespace TreeBehaviour
} // namespace app::classes::types
