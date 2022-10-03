#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSpanStorage__Class** type_info;
        inline app::TimeSpanStorage__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanStorage__Class>(type_info, "System.Data.Common", "TimeSpanStorage");
        }
        inline app::TimeSpanStorage* create() {
            return il2cpp::create_object<app::TimeSpanStorage>(get_class());
        }
    } // namespace TimeSpanStorage
} // namespace app::classes::types
