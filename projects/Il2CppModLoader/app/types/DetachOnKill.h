#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DetachOnKill {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DetachOnKill__Class** type_info;
        inline app::DetachOnKill__Class* get_class() {
            return il2cpp::get_class<app::DetachOnKill__Class>(type_info, "", "DetachOnKill");
        }
        inline app::DetachOnKill* create() {
            return il2cpp::create_object<app::DetachOnKill>(get_class());
        }
    } // namespace DetachOnKill
} // namespace app::classes::types
