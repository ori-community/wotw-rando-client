#pragma once
#include <Modloader/app/structs/SpiderAttackCategory__Enum.h>
#include <Modloader/app/structs/SpiderAttackCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderAttackCategory__Enum {
        inline app::SpiderAttackCategory__Enum__Class** type_info() {
            static app::SpiderAttackCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderAttackCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderAttackCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderAttackCategory__Enum__Class>(type_info(), "", "SpiderAttackCategory");
        }
        inline app::SpiderAttackCategory__Enum* create() {
            return il2cpp::create_object<app::SpiderAttackCategory__Enum>(get_class());
        }
    } // namespace SpiderAttackCategory__Enum
} // namespace app::classes::types
