#pragma once
#include <Modloader/app/structs/IgnitableSpiritTorch_c.h>
#include <Modloader/app/structs/IgnitableSpiritTorch_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnitableSpiritTorch_c {
        inline app::IgnitableSpiritTorch_c__Class** type_info() {
            static app::IgnitableSpiritTorch_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IgnitableSpiritTorch_c__Class**)(modloader::win::memory::resolve_rva(0x0473A7B0));
            }
            return cache;
        }
        inline app::IgnitableSpiritTorch_c__Class* get_class() {
            return il2cpp::get_nested_class<app::IgnitableSpiritTorch_c__Class>(type_info(), "", "IgnitableSpiritTorch", "<>c");
        }
        inline app::IgnitableSpiritTorch_c* create() {
            return il2cpp::create_object<app::IgnitableSpiritTorch_c>(get_class());
        }
    } // namespace IgnitableSpiritTorch_c
} // namespace app::classes::types
