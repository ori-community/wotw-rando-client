#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicMaterialCombine__Enum {
        namespace {
            inline app::PhysicMaterialCombine__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PhysicMaterialCombine__Enum__Class** type_info = &type_info_ref;
        inline app::PhysicMaterialCombine__Enum__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterialCombine__Enum__Class>(type_info, "UnityEngine", "PhysicMaterialCombine");
        }
        inline app::PhysicMaterialCombine__Enum* create() {
            return il2cpp::create_object<app::PhysicMaterialCombine__Enum>(get_class());
        }
    } // namespace PhysicMaterialCombine__Enum
} // namespace app::classes::types
