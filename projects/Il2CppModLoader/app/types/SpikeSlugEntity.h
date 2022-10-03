#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpikeSlugEntity__Class** type_info;
        inline app::SpikeSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugEntity__Class>(type_info, "", "SpikeSlugEntity");
        }
        inline app::SpikeSlugEntity* create() {
            return il2cpp::create_object<app::SpikeSlugEntity>(get_class());
        }
    } // namespace SpikeSlugEntity
} // namespace app::classes::types
