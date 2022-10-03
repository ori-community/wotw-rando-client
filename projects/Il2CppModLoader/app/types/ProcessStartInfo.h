#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProcessStartInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProcessStartInfo__Class** type_info;
        inline app::ProcessStartInfo__Class* get_class() {
            return il2cpp::get_class<app::ProcessStartInfo__Class>(type_info, "System.Diagnostics", "ProcessStartInfo");
        }
        inline app::ProcessStartInfo* create() {
            return il2cpp::create_object<app::ProcessStartInfo>(get_class());
        }
    } // namespace ProcessStartInfo
} // namespace app::classes::types
