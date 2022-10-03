#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BTContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BTContext__Class** type_info;
        inline app::BTContext__Class* get_class() {
            return il2cpp::get_class<app::BTContext__Class>(type_info, "Moon.BehaviourSystem", "BTContext");
        }
        inline app::BTContext* create() {
            return il2cpp::create_object<app::BTContext>(get_class());
        }
    } // namespace BTContext
} // namespace app::classes::types
