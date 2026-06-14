#pragma once
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_StructureSimulationMode__Enum.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_StructureSimulationMode__Enum {
        inline app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class** type_info() {
            static app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class>(type_info(), "Moon.Animation", "NativeVerletAnimationPostprocess", "StructureSimulationMode");
        }
        inline app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess_StructureSimulationMode__Enum
} // namespace app::classes::types
