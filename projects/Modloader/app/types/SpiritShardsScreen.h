#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardsScreen {
        inline app::SpiritShardsScreen__Class** type_info = (app::SpiritShardsScreen__Class**)(modloader::win::memory::resolve_rva(0x04785B58));
        inline app::SpiritShardsScreen__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardsScreen__Class>(type_info, "", "SpiritShardsScreen");
        }
        inline app::SpiritShardsScreen* create() {
            return il2cpp::create_object<app::SpiritShardsScreen>(get_class());
        }
    } // namespace SpiritShardsScreen
} // namespace app::classes::types
