#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AxisTools {
        namespace {
            app::AxisTools__Class* type_info_ref = nullptr;
        }
        app::AxisTools__Class** type_info = &type_info_ref;
        inline app::AxisTools__Class* get_class() {
            return il2cpp::get_class<app::AxisTools__Class>(type_info, "RootMotion", "AxisTools");
        }
        inline app::AxisTools* create() {
            return il2cpp::create_object<app::AxisTools>(get_class());
        }
    } // namespace AxisTools
} // namespace app::classes::types
