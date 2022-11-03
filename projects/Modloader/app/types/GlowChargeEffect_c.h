#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlowChargeEffect_c {
        inline app::GlowChargeEffect_c__Class** type_info = (app::GlowChargeEffect_c__Class**)(modloader::win::memory::resolve_rva(0x0470C240));
        inline app::GlowChargeEffect_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GlowChargeEffect_c__Class>(type_info, "", "GlowChargeEffect", "<>c");
        }
        inline app::GlowChargeEffect_c* create() {
            return il2cpp::create_object<app::GlowChargeEffect_c>(get_class());
        }
    } // namespace GlowChargeEffect_c
} // namespace app::classes::types
