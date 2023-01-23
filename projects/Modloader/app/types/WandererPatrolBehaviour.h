#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererPatrolBehaviour__Class.h>
#include <Modloader/app/structs/WandererPatrolBehaviour.h>

namespace app::classes::types {
    namespace WandererPatrolBehaviour {
        namespace {
            inline app::WandererPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPatrolBehaviour__Class>(type_info, "Moon", "WandererPatrolBehaviour");
        }
        inline app::WandererPatrolBehaviour* create() {
            return il2cpp::create_object<app::WandererPatrolBehaviour>(get_class());
        }
    } // namespace WandererPatrolBehaviour
} // namespace app::classes::types
