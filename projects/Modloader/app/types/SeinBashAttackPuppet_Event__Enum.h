#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBashAttackPuppet_Event__Enum__Class.h>
#include <Modloader/app/structs/SeinBashAttackPuppet_Event__Enum.h>

namespace app::classes::types {
    namespace SeinBashAttackPuppet_Event__Enum {
        namespace {
            inline app::SeinBashAttackPuppet_Event__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinBashAttackPuppet_Event__Enum__Class** type_info = &type_info_ref;
        inline app::SeinBashAttackPuppet_Event__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBashAttackPuppet_Event__Enum__Class>(type_info, "", "SeinBashAttackPuppet", "Event");
        }
        inline app::SeinBashAttackPuppet_Event__Enum* create() {
            return il2cpp::create_object<app::SeinBashAttackPuppet_Event__Enum>(get_class());
        }
    } // namespace SeinBashAttackPuppet_Event__Enum
} // namespace app::classes::types
