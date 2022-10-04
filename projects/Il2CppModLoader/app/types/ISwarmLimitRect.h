#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISwarmLimitRect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISwarmLimitRect__Class** type_info;
        inline app::ISwarmLimitRect__Class* get_class() {
            return il2cpp::get_class<app::ISwarmLimitRect__Class>(type_info, "", "ISwarmLimitRect");
        }
        inline app::ISwarmLimitRect* create() {
            return il2cpp::create_object<app::ISwarmLimitRect>(get_class());
        }
    } // namespace ISwarmLimitRect
} // namespace app::classes::types
