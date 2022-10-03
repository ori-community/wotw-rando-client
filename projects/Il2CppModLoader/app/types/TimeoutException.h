#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeoutException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeoutException__Class** type_info;
        inline app::TimeoutException__Class* get_class() {
            return il2cpp::get_class<app::TimeoutException__Class>(type_info, "System", "TimeoutException");
        }
        inline app::TimeoutException* create() {
            return il2cpp::create_object<app::TimeoutException>(get_class());
        }
    } // namespace TimeoutException
} // namespace app::classes::types
