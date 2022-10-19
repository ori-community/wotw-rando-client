#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorApplyRule__Enum {
        namespace {
            inline app::ColorApplyRule__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ColorApplyRule__Enum__Class** type_info = &type_info_ref;
        inline app::ColorApplyRule__Enum__Class* get_class() {
            return il2cpp::get_class<app::ColorApplyRule__Enum__Class>(type_info, "Moon.EffectsFramework.Wisps", "ColorApplyRule");
        }
        inline app::ColorApplyRule__Enum* create() {
            return il2cpp::create_object<app::ColorApplyRule__Enum>(get_class());
        }
    } // namespace ColorApplyRule__Enum
} // namespace app::classes::types
