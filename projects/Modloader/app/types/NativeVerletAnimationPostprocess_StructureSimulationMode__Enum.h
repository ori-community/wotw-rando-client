#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_StructureSimulationMode__Enum.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_StructureSimulationMode__Enum {
        namespace {
            inline app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class** type_info = &type_info_ref;
        inline app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum__Class>(type_info, "Moon.Animation", "NativeVerletAnimationPostprocess", "StructureSimulationMode");
        }
        inline app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_StructureSimulationMode__Enum>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess_StructureSimulationMode__Enum
} // namespace app::classes::types
