#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataPointIcon_Icons {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataPointIcon_Icons__Class** type_info;
        inline app::DataPointIcon_Icons__Class* get_class() {
            return il2cpp::get_nested_class<app::DataPointIcon_Icons__Class>(type_info, "Moon.Telemetry", "DataPointIcon", "Icons");
        }
        inline app::DataPointIcon_Icons* create() {
            return il2cpp::create_object<app::DataPointIcon_Icons>(get_class());
        }
    } // namespace DataPointIcon_Icons
} // namespace app::classes::types
