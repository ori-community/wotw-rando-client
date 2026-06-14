#pragma once
#include <Modloader/app/structs/SpiritShardsScreen_c.h>
#include <Modloader/app/structs/SpiritShardsScreen_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsScreen_c {
        inline app::SpiritShardsScreen_c__Class** type_info() {
            static app::SpiritShardsScreen_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x047608E8));
            }
            return cache;
        }
        inline app::SpiritShardsScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsScreen_c__Class>(type_info(), "", "SpiritShardsScreen", "<>c");
        }
        inline app::SpiritShardsScreen_c* create() {
            return il2cpp::create_object<app::SpiritShardsScreen_c>(get_class());
        }
    } // namespace SpiritShardsScreen_c
} // namespace app::classes::types
