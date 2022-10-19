#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AxisTools {
        namespace {
            inline app::AxisTools__Class* type_info_ref = nullptr;
        }
        inline app::AxisTools__Class** type_info = &type_info_ref;
        inline app::AxisTools__Class* get_class() {
            return il2cpp::get_class<app::AxisTools__Class>(type_info, "RootMotion", "AxisTools");
        }
        inline app::AxisTools* create() {
            return il2cpp::create_object<app::AxisTools>(get_class());
        }
    } // namespace AxisTools
} // namespace app::classes::types
