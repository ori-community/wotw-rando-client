#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerBuilderEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MinerBuilderEntity__Class** type_info;
        inline app::MinerBuilderEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderEntity__Class>(type_info, "", "MinerBuilderEntity");
        }
        inline app::MinerBuilderEntity* create() {
            return il2cpp::create_object<app::MinerBuilderEntity>(get_class());
        }
    } // namespace MinerBuilderEntity
} // namespace app::classes::types
