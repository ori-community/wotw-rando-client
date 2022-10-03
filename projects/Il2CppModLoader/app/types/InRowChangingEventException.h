#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InRowChangingEventException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InRowChangingEventException__Class** type_info;
        inline app::InRowChangingEventException__Class* get_class() {
            return il2cpp::get_class<app::InRowChangingEventException__Class>(type_info, "System.Data", "InRowChangingEventException");
        }
        inline app::InRowChangingEventException* create() {
            return il2cpp::create_object<app::InRowChangingEventException>(get_class());
        }
    } // namespace InRowChangingEventException
} // namespace app::classes::types
