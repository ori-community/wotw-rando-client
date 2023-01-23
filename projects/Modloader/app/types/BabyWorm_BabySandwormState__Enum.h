#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum__Class.h>
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum.h>

namespace app::classes::types {
    namespace BabyWorm_BabySandwormState__Enum {
        namespace {
            inline app::BabyWorm_BabySandwormState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BabyWorm_BabySandwormState__Enum__Class** type_info = &type_info_ref;
        inline app::BabyWorm_BabySandwormState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BabyWorm_BabySandwormState__Enum__Class>(type_info, "", "BabyWorm", "BabySandwormState");
        }
        inline app::BabyWorm_BabySandwormState__Enum* create() {
            return il2cpp::create_object<app::BabyWorm_BabySandwormState__Enum>(get_class());
        }
    } // namespace BabyWorm_BabySandwormState__Enum
} // namespace app::classes::types
