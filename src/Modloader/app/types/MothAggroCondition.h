#pragma once
#include <Modloader/app/structs/MothAggroCondition.h>
#include <Modloader/app/structs/MothAggroCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothAggroCondition {
        inline app::MothAggroCondition__Class** type_info() {
            static app::MothAggroCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MothAggroCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MothAggroCondition__Class* get_class() {
            return il2cpp::get_class<app::MothAggroCondition__Class>(type_info(), "Moon.Behaviour", "MothAggroCondition");
        }
        inline app::MothAggroCondition* create() {
            return il2cpp::create_object<app::MothAggroCondition>(get_class());
        }
    } // namespace MothAggroCondition
} // namespace app::classes::types
