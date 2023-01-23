#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BabyWorm_AimMode__Enum__Class.h>
#include <Modloader/app/structs/BabyWorm_AimMode__Enum.h>

namespace app::classes::types {
    namespace BabyWorm_AimMode__Enum {
        namespace {
            inline app::BabyWorm_AimMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BabyWorm_AimMode__Enum__Class** type_info = &type_info_ref;
        inline app::BabyWorm_AimMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BabyWorm_AimMode__Enum__Class>(type_info, "", "BabyWorm", "AimMode");
        }
        inline app::BabyWorm_AimMode__Enum* create() {
            return il2cpp::create_object<app::BabyWorm_AimMode__Enum>(get_class());
        }
    } // namespace BabyWorm_AimMode__Enum
} // namespace app::classes::types
