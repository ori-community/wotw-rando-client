#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneEnergySample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OneEnergySample__Class** type_info;
        inline app::OneEnergySample__Class* get_class() {
            return il2cpp::get_class<app::OneEnergySample__Class>(type_info, "Moon.ArtOptimization", "OneEnergySample");
        }
        inline app::OneEnergySample* create() {
            return il2cpp::create_object<app::OneEnergySample>(get_class());
        }
    } // namespace OneEnergySample
} // namespace app::classes::types
