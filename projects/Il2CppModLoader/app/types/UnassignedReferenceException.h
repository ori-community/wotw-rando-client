#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnassignedReferenceException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnassignedReferenceException__Class** type_info;
        inline app::UnassignedReferenceException__Class* get_class() {
            return il2cpp::get_class<app::UnassignedReferenceException__Class>(type_info, "UnityEngine", "UnassignedReferenceException");
        }
        inline app::UnassignedReferenceException* create() {
            return il2cpp::create_object<app::UnassignedReferenceException>(get_class());
        }
    } // namespace UnassignedReferenceException
} // namespace app::classes::types
