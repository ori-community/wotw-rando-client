#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AxisInput {
        namespace {
            inline app::AxisInput__Class* type_info_ref = nullptr;
        }
        inline app::AxisInput__Class** type_info = &type_info_ref;
        inline app::AxisInput__Class* get_class() {
            return il2cpp::get_class<app::AxisInput__Class>(type_info, "frameworks.Switch", "AxisInput");
        }
        inline app::AxisInput* create() {
            return il2cpp::create_object<app::AxisInput>(get_class());
        }
    } // namespace AxisInput
} // namespace app::classes::types
