#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FindObjectsWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FindObjectsWrapper__Class** type_info;
        inline app::FindObjectsWrapper__Class* get_class() {
            return il2cpp::get_class<app::FindObjectsWrapper__Class>(type_info, "Moon", "FindObjectsWrapper");
        }
        inline app::FindObjectsWrapper* create() {
            return il2cpp::create_object<app::FindObjectsWrapper>(get_class());
        }
    } // namespace FindObjectsWrapper
} // namespace app::classes::types
