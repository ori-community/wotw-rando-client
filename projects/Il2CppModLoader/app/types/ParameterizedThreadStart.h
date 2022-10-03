#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterizedThreadStart {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterizedThreadStart__Class** type_info;
        inline app::ParameterizedThreadStart__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedThreadStart__Class>(type_info, "System.Threading", "ParameterizedThreadStart");
        }
        inline app::ParameterizedThreadStart* create() {
            return il2cpp::create_object<app::ParameterizedThreadStart>(get_class());
        }
    } // namespace ParameterizedThreadStart
} // namespace app::classes::types
