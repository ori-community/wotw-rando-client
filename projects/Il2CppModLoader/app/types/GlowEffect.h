#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlowEffect {
        namespace {
            inline app::GlowEffect__Class* type_info_ref = nullptr;
        }
        inline app::GlowEffect__Class** type_info = &type_info_ref;
        inline app::GlowEffect__Class* get_class() {
            return il2cpp::get_class<app::GlowEffect__Class>(type_info, "", "GlowEffect");
        }
        inline app::GlowEffect* create() {
            return il2cpp::create_object<app::GlowEffect>(get_class());
        }
    } // namespace GlowEffect
} // namespace app::classes::types
