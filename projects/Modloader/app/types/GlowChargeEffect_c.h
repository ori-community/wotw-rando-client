#pragma once
#include <Modloader/app/structs/GlowChargeEffect_c.h>
#include <Modloader/app/structs/GlowChargeEffect_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlowChargeEffect_c {
        inline app::GlowChargeEffect_c__Class** type_info() {
            static app::GlowChargeEffect_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GlowChargeEffect_c__Class**)(modloader::win::memory::resolve_rva(0x0470C240));
            }
            return cache;
        }
        inline app::GlowChargeEffect_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GlowChargeEffect_c__Class>(type_info(), "", "GlowChargeEffect", "<>c");
        }
        inline app::GlowChargeEffect_c* create() {
            return il2cpp::create_object<app::GlowChargeEffect_c>(get_class());
        }
    } // namespace GlowChargeEffect_c
} // namespace app::classes::types
