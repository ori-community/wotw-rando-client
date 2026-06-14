#pragma once
#include <Modloader/app/structs/SeinBashAttackPuppet_SetElement__Enum.h>
#include <Modloader/app/structs/SeinBashAttackPuppet_SetElement__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBashAttackPuppet_SetElement__Enum {
        inline app::SeinBashAttackPuppet_SetElement__Enum__Class** type_info() {
            static app::SeinBashAttackPuppet_SetElement__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBashAttackPuppet_SetElement__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBashAttackPuppet_SetElement__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBashAttackPuppet_SetElement__Enum__Class>(type_info(), "", "SeinBashAttackPuppet", "SetElement");
        }
        inline app::SeinBashAttackPuppet_SetElement__Enum* create() {
            return il2cpp::create_object<app::SeinBashAttackPuppet_SetElement__Enum>(get_class());
        }
    } // namespace SeinBashAttackPuppet_SetElement__Enum
} // namespace app::classes::types
