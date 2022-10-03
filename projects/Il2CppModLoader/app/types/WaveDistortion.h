#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaveDistortion {
        namespace {
            app::WaveDistortion__Class* type_info_ref = nullptr;
        }
        app::WaveDistortion__Class** type_info = &type_info_ref;
        inline app::WaveDistortion__Class* get_class() {
            return il2cpp::get_class<app::WaveDistortion__Class>(type_info, "Colorful", "WaveDistortion");
        }
        inline app::WaveDistortion* create() {
            return il2cpp::create_object<app::WaveDistortion>(get_class());
        }
    } // namespace WaveDistortion
} // namespace app::classes::types
