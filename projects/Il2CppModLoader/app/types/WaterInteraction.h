#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterInteraction {
        namespace {
            inline app::WaterInteraction__Class* type_info_ref = nullptr;
        }
        inline app::WaterInteraction__Class** type_info = &type_info_ref;
        inline app::WaterInteraction__Class* get_class() {
            return il2cpp::get_class<app::WaterInteraction__Class>(type_info, "", "WaterInteraction");
        }
        inline app::WaterInteraction* create() {
            return il2cpp::create_object<app::WaterInteraction>(get_class());
        }
    } // namespace WaterInteraction
} // namespace app::classes::types
