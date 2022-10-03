#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Noise {
        namespace {
            app::Noise__Class* type_info_ref = nullptr;
        }
        app::Noise__Class** type_info = &type_info_ref;
        inline app::Noise__Class* get_class() {
            return il2cpp::get_class<app::Noise__Class>(type_info, "Colorful", "Noise");
        }
        inline app::Noise* create() {
            return il2cpp::create_object<app::Noise>(get_class());
        }
    } // namespace Noise
} // namespace app::classes::types
