#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalException__Class** type_info;
        inline app::InternalException__Class* get_class() {
            return il2cpp::get_class<app::InternalException__Class>(type_info, "System.Net", "InternalException");
        }
        inline app::InternalException* create() {
            return il2cpp::create_object<app::InternalException>(get_class());
        }
    } // namespace InternalException
} // namespace app::classes::types
