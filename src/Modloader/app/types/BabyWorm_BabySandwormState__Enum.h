#pragma once
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum.h>
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyWorm_BabySandwormState__Enum {
        inline app::BabyWorm_BabySandwormState__Enum__Class** type_info() {
            static app::BabyWorm_BabySandwormState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyWorm_BabySandwormState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyWorm_BabySandwormState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BabyWorm_BabySandwormState__Enum__Class>(type_info(), "", "BabyWorm", "BabySandwormState");
        }
        inline app::BabyWorm_BabySandwormState__Enum* create() {
            return il2cpp::create_object<app::BabyWorm_BabySandwormState__Enum>(get_class());
        }
    } // namespace BabyWorm_BabySandwormState__Enum
} // namespace app::classes::types
