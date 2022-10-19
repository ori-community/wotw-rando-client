#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnyConditions {
        namespace {
            inline app::AnyConditions__Class* type_info_ref = nullptr;
        }
        inline app::AnyConditions__Class** type_info = &type_info_ref;
        inline app::AnyConditions__Class* get_class() {
            return il2cpp::get_class<app::AnyConditions__Class>(type_info, "Moon.InteractionGraph", "AnyConditions");
        }
        inline app::AnyConditions* create() {
            return il2cpp::create_object<app::AnyConditions>(get_class());
        }
    } // namespace AnyConditions
} // namespace app::classes::types
