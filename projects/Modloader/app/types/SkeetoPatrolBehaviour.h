#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoPatrolBehaviour__Class.h>
#include <Modloader/app/structs/SkeetoPatrolBehaviour.h>

namespace app::classes::types {
    namespace SkeetoPatrolBehaviour {
        namespace {
            inline app::SkeetoPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoPatrolBehaviour__Class>(type_info, "Moon", "SkeetoPatrolBehaviour");
        }
        inline app::SkeetoPatrolBehaviour* create() {
            return il2cpp::create_object<app::SkeetoPatrolBehaviour>(get_class());
        }
    } // namespace SkeetoPatrolBehaviour
} // namespace app::classes::types
