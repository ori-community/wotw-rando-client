#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AllConditions {
        namespace {
            inline app::AllConditions__Class* type_info_ref = nullptr;
        }
        inline app::AllConditions__Class** type_info = &type_info_ref;
        inline app::AllConditions__Class* get_class() {
            return il2cpp::get_class<app::AllConditions__Class>(type_info, "Moon.InteractionGraph", "AllConditions");
        }
        inline app::AllConditions* create() {
            return il2cpp::create_object<app::AllConditions>(get_class());
        }
    } // namespace AllConditions
} // namespace app::classes::types
