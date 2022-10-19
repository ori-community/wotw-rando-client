#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterFall {
        namespace {
            inline app::WaterFall__Class* type_info_ref = nullptr;
        }
        inline app::WaterFall__Class** type_info = &type_info_ref;
        inline app::WaterFall__Class* get_class() {
            return il2cpp::get_class<app::WaterFall__Class>(type_info, "Moon", "WaterFall");
        }
        inline app::WaterFall* create() {
            return il2cpp::create_object<app::WaterFall>(get_class());
        }
    } // namespace WaterFall
} // namespace app::classes::types
