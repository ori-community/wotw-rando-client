#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RGBSplit {
        namespace {
            app::RGBSplit__Class* type_info_ref = nullptr;
        }
        app::RGBSplit__Class** type_info = &type_info_ref;
        inline app::RGBSplit__Class* get_class() {
            return il2cpp::get_class<app::RGBSplit__Class>(type_info, "Colorful", "RGBSplit");
        }
        inline app::RGBSplit* create() {
            return il2cpp::create_object<app::RGBSplit>(get_class());
        }
    } // namespace RGBSplit
} // namespace app::classes::types
