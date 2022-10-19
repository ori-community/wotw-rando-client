#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Flammable_FlameColor__Enum {
        namespace {
            inline app::Flammable_FlameColor__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Flammable_FlameColor__Enum__Class** type_info = &type_info_ref;
        inline app::Flammable_FlameColor__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Flammable_FlameColor__Enum__Class>(type_info, "Moon", "Flammable", "FlameColor");
        }
        inline app::Flammable_FlameColor__Enum* create() {
            return il2cpp::create_object<app::Flammable_FlameColor__Enum>(get_class());
        }
    } // namespace Flammable_FlameColor__Enum
} // namespace app::classes::types
