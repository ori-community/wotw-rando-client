#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VintageFast {
        namespace {
            app::VintageFast__Class* type_info_ref = nullptr;
        }
        app::VintageFast__Class** type_info = &type_info_ref;
        inline app::VintageFast__Class* get_class() {
            return il2cpp::get_class<app::VintageFast__Class>(type_info, "Colorful", "VintageFast");
        }
        inline app::VintageFast* create() {
            return il2cpp::create_object<app::VintageFast>(get_class());
        }
    } // namespace VintageFast
} // namespace app::classes::types
