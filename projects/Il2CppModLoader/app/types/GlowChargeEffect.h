#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlowChargeEffect {
        namespace {
            app::GlowChargeEffect__Class* type_info_ref = nullptr;
        }
        app::GlowChargeEffect__Class** type_info = &type_info_ref;
        inline app::GlowChargeEffect__Class* get_class() {
            return il2cpp::get_class<app::GlowChargeEffect__Class>(type_info, "", "GlowChargeEffect");
        }
        inline app::GlowChargeEffect* create() {
            return il2cpp::create_object<app::GlowChargeEffect>(get_class());
        }
    } // namespace GlowChargeEffect
} // namespace app::classes::types
