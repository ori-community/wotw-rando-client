#pragma once
#include <Modloader/app/structs/PetrifiedOwlAttackCategory__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlAttackCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlAttackCategory__Enum {
        inline app::PetrifiedOwlAttackCategory__Enum__Class** type_info() {
            static app::PetrifiedOwlAttackCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlAttackCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlAttackCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlAttackCategory__Enum__Class>(type_info(), "", "PetrifiedOwlAttackCategory");
        }
        inline app::PetrifiedOwlAttackCategory__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlAttackCategory__Enum>(get_class());
        }
    } // namespace PetrifiedOwlAttackCategory__Enum
} // namespace app::classes::types
