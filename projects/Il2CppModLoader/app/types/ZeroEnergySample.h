#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZeroEnergySample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ZeroEnergySample__Class** type_info;
        inline app::ZeroEnergySample__Class* get_class() {
            return il2cpp::get_class<app::ZeroEnergySample__Class>(type_info, "Moon.ArtOptimization", "ZeroEnergySample");
        }
        inline app::ZeroEnergySample* create() {
            return il2cpp::create_object<app::ZeroEnergySample>(get_class());
        }
    } // namespace ZeroEnergySample
} // namespace app::classes::types
