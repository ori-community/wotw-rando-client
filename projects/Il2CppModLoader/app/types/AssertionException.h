#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssertionException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssertionException__Class** type_info;
        inline app::AssertionException__Class* get_class() {
            return il2cpp::get_class<app::AssertionException__Class>(type_info, "UnityEngine.Assertions", "AssertionException");
        }
        inline app::AssertionException* create() {
            return il2cpp::create_object<app::AssertionException>(get_class());
        }
    } // namespace AssertionException
} // namespace app::classes::types
