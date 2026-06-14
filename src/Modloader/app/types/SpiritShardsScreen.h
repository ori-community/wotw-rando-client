#pragma once
#include <Modloader/app/structs/SpiritShardsScreen.h>
#include <Modloader/app/structs/SpiritShardsScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsScreen {
        inline app::SpiritShardsScreen__Class** type_info() {
            static app::SpiritShardsScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardsScreen__Class**)(modloader::win::memory::resolve_rva(0x04785B58));
            }
            return cache;
        }
        inline app::SpiritShardsScreen__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardsScreen__Class>(type_info(), "", "SpiritShardsScreen");
        }
        inline app::SpiritShardsScreen* create() {
            return il2cpp::create_object<app::SpiritShardsScreen>(get_class());
        }
    } // namespace SpiritShardsScreen
} // namespace app::classes::types
