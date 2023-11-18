#pragma once
#include <Modloader/app/structs/PhysicMaterialCombine__Enum.h>
#include <Modloader/app/structs/PhysicMaterialCombine__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicMaterialCombine__Enum {
        inline app::PhysicMaterialCombine__Enum__Class** type_info() {
            static app::PhysicMaterialCombine__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicMaterialCombine__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicMaterialCombine__Enum__Class* get_class() {
            return il2cpp::get_class<app::PhysicMaterialCombine__Enum__Class>(type_info(), "UnityEngine", "PhysicMaterialCombine");
        }
        inline app::PhysicMaterialCombine__Enum* create() {
            return il2cpp::create_object<app::PhysicMaterialCombine__Enum>(get_class());
        }
    } // namespace PhysicMaterialCombine__Enum
} // namespace app::classes::types
