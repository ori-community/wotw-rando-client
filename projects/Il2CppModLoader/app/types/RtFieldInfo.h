#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RtFieldInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RtFieldInfo__Class** type_info;
        inline app::RtFieldInfo__Class* get_class() {
            return il2cpp::get_class<app::RtFieldInfo__Class>(type_info, "System.Reflection", "RtFieldInfo");
        }
        inline app::RtFieldInfo* create() {
            return il2cpp::create_object<app::RtFieldInfo>(get_class());
        }
    } // namespace RtFieldInfo
} // namespace app::classes::types
