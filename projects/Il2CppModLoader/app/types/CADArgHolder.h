#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CADArgHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CADArgHolder__Class** type_info;
        inline app::CADArgHolder__Class* get_class() {
            return il2cpp::get_class<app::CADArgHolder__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADArgHolder");
        }
        inline app::CADArgHolder* create() {
            return il2cpp::create_object<app::CADArgHolder>(get_class());
        }
    } // namespace CADArgHolder
} // namespace app::classes::types
