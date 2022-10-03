#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardsScreen__Class** type_info;
        inline app::SpiritShardsScreen__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardsScreen__Class>(type_info, "", "SpiritShardsScreen");
        }
        inline app::SpiritShardsScreen* create() {
            return il2cpp::create_object<app::SpiritShardsScreen>(get_class());
        }
    } // namespace SpiritShardsScreen
} // namespace app::classes::types
