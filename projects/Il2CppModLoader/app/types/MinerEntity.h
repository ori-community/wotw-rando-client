#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MinerEntity__Class** type_info;
        inline app::MinerEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerEntity__Class>(type_info, "", "MinerEntity");
        }
        inline app::MinerEntity* create() {
            return il2cpp::create_object<app::MinerEntity>(get_class());
        }
    } // namespace MinerEntity
} // namespace app::classes::types
