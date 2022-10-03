#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvokableCallList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvokableCallList__Class** type_info;
        inline app::InvokableCallList__Class* get_class() {
            return il2cpp::get_class<app::InvokableCallList__Class>(type_info, "UnityEngine.Events", "InvokableCallList");
        }
        inline app::InvokableCallList* create() {
            return il2cpp::create_object<app::InvokableCallList>(get_class());
        }
    } // namespace InvokableCallList
} // namespace app::classes::types
