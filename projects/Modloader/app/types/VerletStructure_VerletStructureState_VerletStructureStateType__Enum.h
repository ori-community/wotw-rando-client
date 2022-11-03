#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_VerletStructureState_VerletStructureStateType__Enum {
        namespace {
            inline app::VerletStructure_VerletStructureState_VerletStructureStateType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructure_VerletStructureState_VerletStructureStateType__Enum__Class** type_info = &type_info_ref;
        inline app::VerletStructure_VerletStructureState_VerletStructureStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_VerletStructureState_VerletStructureStateType__Enum__Class>(type_info, "", "VerletStructure+VerletStructureState", "VerletStructureStateType");
        }
        inline app::VerletStructure_VerletStructureState_VerletStructureStateType__Enum* create() {
            return il2cpp::create_object<app::VerletStructure_VerletStructureState_VerletStructureStateType__Enum>(get_class());
        }
    } // namespace VerletStructure_VerletStructureState_VerletStructureStateType__Enum
} // namespace app::classes::types
