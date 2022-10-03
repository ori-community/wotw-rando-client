#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbiguousMatchException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AmbiguousMatchException__Class** type_info;
        inline app::AmbiguousMatchException__Class* get_class() {
            return il2cpp::get_class<app::AmbiguousMatchException__Class>(type_info, "System.Reflection", "AmbiguousMatchException");
        }
        inline app::AmbiguousMatchException* create() {
            return il2cpp::create_object<app::AmbiguousMatchException>(get_class());
        }
    } // namespace AmbiguousMatchException
} // namespace app::classes::types
