#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoHttpDate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoHttpDate__Class** type_info;
        inline app::MonoHttpDate__Class* get_class() {
            return il2cpp::get_class<app::MonoHttpDate__Class>(type_info, "System.Net", "MonoHttpDate");
        }
        inline app::MonoHttpDate* create() {
            return il2cpp::create_object<app::MonoHttpDate>(get_class());
        }
    } // namespace MonoHttpDate
} // namespace app::classes::types
