#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NavMeshPathStatus__Enum__Class.h>
#include <Modloader/app/structs/NavMeshPathStatus__Enum.h>

namespace app::classes::types {
    namespace NavMeshPathStatus__Enum {
        namespace {
            inline app::NavMeshPathStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NavMeshPathStatus__Enum__Class** type_info = &type_info_ref;
        inline app::NavMeshPathStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::NavMeshPathStatus__Enum__Class>(type_info, "UnityEngine.AI", "NavMeshPathStatus");
        }
        inline app::NavMeshPathStatus__Enum* create() {
            return il2cpp::create_object<app::NavMeshPathStatus__Enum>(get_class());
        }
    } // namespace NavMeshPathStatus__Enum
} // namespace app::classes::types
