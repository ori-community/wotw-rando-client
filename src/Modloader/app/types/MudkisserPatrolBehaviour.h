#pragma once
#include <Modloader/app/structs/MudkisserPatrolBehaviour.h>
#include <Modloader/app/structs/MudkisserPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserPatrolBehaviour {
        inline app::MudkisserPatrolBehaviour__Class** type_info() {
            static app::MudkisserPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisserPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisserPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserPatrolBehaviour__Class>(type_info(), "", "MudkisserPatrolBehaviour");
        }
        inline app::MudkisserPatrolBehaviour* create() {
            return il2cpp::create_object<app::MudkisserPatrolBehaviour>(get_class());
        }
    } // namespace MudkisserPatrolBehaviour
} // namespace app::classes::types
