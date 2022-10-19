#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBashAttackPuppet_SetElement__Enum {
        namespace {
            inline app::SeinBashAttackPuppet_SetElement__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinBashAttackPuppet_SetElement__Enum__Class** type_info = &type_info_ref;
        inline app::SeinBashAttackPuppet_SetElement__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBashAttackPuppet_SetElement__Enum__Class>(type_info, "", "SeinBashAttackPuppet", "SetElement");
        }
        inline app::SeinBashAttackPuppet_SetElement__Enum* create() {
            return il2cpp::create_object<app::SeinBashAttackPuppet_SetElement__Enum>(get_class());
        }
    } // namespace SeinBashAttackPuppet_SetElement__Enum
} // namespace app::classes::types
