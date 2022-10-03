#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlowChargeEffect_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlowChargeEffect_c__Class** type_info;
        inline app::GlowChargeEffect_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GlowChargeEffect_c__Class>(type_info, "", "GlowChargeEffect", "<>c");
        }
        inline app::GlowChargeEffect_c* create() {
            return il2cpp::create_object<app::GlowChargeEffect_c>(get_class());
        }
    } // namespace GlowChargeEffect_c
} // namespace app::classes::types
