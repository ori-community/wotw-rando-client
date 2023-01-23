#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBashAttackPuppet_SetElement__Enum__Class.h>
#include <Modloader/app/structs/SeinBashAttackPuppet_SetElement__Enum.h>

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
