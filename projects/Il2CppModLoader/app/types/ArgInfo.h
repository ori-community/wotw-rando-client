#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArgInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArgInfo__Class** type_info;
        inline app::ArgInfo__Class* get_class() {
            return il2cpp::get_class<app::ArgInfo__Class>(type_info, "System.Runtime.Remoting.Messaging", "ArgInfo");
        }
        inline app::ArgInfo* create() {
            return il2cpp::create_object<app::ArgInfo>(get_class());
        }
    } // namespace ArgInfo
} // namespace app::classes::types
