#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateException__Class** type_info;
        inline app::UberStateException__Class* get_class() {
            return il2cpp::get_class<app::UberStateException__Class>(type_info, "Moon", "UberStateException");
        }
        inline app::UberStateException* create() {
            return il2cpp::create_object<app::UberStateException>(get_class());
        }
    } // namespace UberStateException
} // namespace app::classes::types
