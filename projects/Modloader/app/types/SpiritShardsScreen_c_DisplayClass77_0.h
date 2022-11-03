#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardsScreen_c_DisplayClass77_0 {
        inline app::SpiritShardsScreen_c_DisplayClass77_0__Class** type_info = (app::SpiritShardsScreen_c_DisplayClass77_0__Class**)(modloader::win::memory::resolve_rva(0x04757C50));
        inline app::SpiritShardsScreen_c_DisplayClass77_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsScreen_c_DisplayClass77_0__Class>(type_info, "", "SpiritShardsScreen", "<>c__DisplayClass77_0");
        }
        inline app::SpiritShardsScreen_c_DisplayClass77_0* create() {
            return il2cpp::create_object<app::SpiritShardsScreen_c_DisplayClass77_0>(get_class());
        }
    } // namespace SpiritShardsScreen_c_DisplayClass77_0
} // namespace app::classes::types
