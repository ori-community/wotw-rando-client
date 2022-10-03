#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffect {
        namespace {
            app::SpiritLeashEffect__Class* type_info_ref = nullptr;
        }
        app::SpiritLeashEffect__Class** type_info = &type_info_ref;
        inline app::SpiritLeashEffect__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffect__Class>(type_info, "", "SpiritLeashEffect");
        }
        inline app::SpiritLeashEffect* create() {
            return il2cpp::create_object<app::SpiritLeashEffect>(get_class());
        }
    } // namespace SpiritLeashEffect
} // namespace app::classes::types
