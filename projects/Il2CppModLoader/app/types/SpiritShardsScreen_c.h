#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardsScreen_c {
        inline app::SpiritShardsScreen_c__Class** type_info = (app::SpiritShardsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x047608E8));
        inline app::SpiritShardsScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsScreen_c__Class>(type_info, "", "SpiritShardsScreen", "<>c");
        }
        inline app::SpiritShardsScreen_c* create() {
            return il2cpp::create_object<app::SpiritShardsScreen_c>(get_class());
        }
    } // namespace SpiritShardsScreen_c
} // namespace app::classes::types
