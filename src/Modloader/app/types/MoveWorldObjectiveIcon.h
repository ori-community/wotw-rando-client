#pragma once
#include <Modloader/app/structs/MoveWorldObjectiveIcon.h>
#include <Modloader/app/structs/MoveWorldObjectiveIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveWorldObjectiveIcon {
        inline app::MoveWorldObjectiveIcon__Class** type_info() {
            static app::MoveWorldObjectiveIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveWorldObjectiveIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveWorldObjectiveIcon__Class* get_class() {
            return il2cpp::get_class<app::MoveWorldObjectiveIcon__Class>(type_info(), "", "MoveWorldObjectiveIcon");
        }
        inline app::MoveWorldObjectiveIcon* create() {
            return il2cpp::create_object<app::MoveWorldObjectiveIcon>(get_class());
        }
    } // namespace MoveWorldObjectiveIcon
} // namespace app::classes::types
