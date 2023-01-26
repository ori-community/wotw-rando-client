#pragma once
#include <Modloader/app/structs/MoveWithCondition.h>
#include <Modloader/app/structs/MoveWithCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveWithCondition {
        inline app::MoveWithCondition__Class** type_info() {
            static app::MoveWithCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveWithCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveWithCondition__Class* get_class() {
            return il2cpp::get_class<app::MoveWithCondition__Class>(type_info(), "", "MoveWithCondition");
        }
        inline app::MoveWithCondition* create() {
            return il2cpp::create_object<app::MoveWithCondition>(get_class());
        }
    } // namespace MoveWithCondition
} // namespace app::classes::types
