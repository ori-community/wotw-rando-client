#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MudkisserPatrolBehaviour {
        namespace {
            inline app::MudkisserPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MudkisserPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::MudkisserPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserPatrolBehaviour__Class>(type_info, "", "MudkisserPatrolBehaviour");
        }
        inline app::MudkisserPatrolBehaviour* create() {
            return il2cpp::create_object<app::MudkisserPatrolBehaviour>(get_class());
        }
    } // namespace MudkisserPatrolBehaviour
} // namespace app::classes::types
