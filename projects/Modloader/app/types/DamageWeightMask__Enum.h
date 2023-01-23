#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageWeightMask__Enum__Class.h>
#include <Modloader/app/structs/DamageWeightMask__Enum.h>

namespace app::classes::types {
    namespace DamageWeightMask__Enum {
        namespace {
            inline app::DamageWeightMask__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DamageWeightMask__Enum__Class** type_info = &type_info_ref;
        inline app::DamageWeightMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageWeightMask__Enum__Class>(type_info, "", "DamageWeightMask");
        }
        inline app::DamageWeightMask__Enum* create() {
            return il2cpp::create_object<app::DamageWeightMask__Enum>(get_class());
        }
    } // namespace DamageWeightMask__Enum
} // namespace app::classes::types
