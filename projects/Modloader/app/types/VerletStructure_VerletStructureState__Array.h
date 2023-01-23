#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState__Array__Class.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState__Array.h>

namespace app::classes::types {
    namespace VerletStructure_VerletStructureState__Array {
        inline app::VerletStructure_VerletStructureState__Array__Class** type_info = (app::VerletStructure_VerletStructureState__Array__Class**)(modloader::win::memory::resolve_rva(0x0475D430));
        inline app::VerletStructure_VerletStructureState__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure_VerletStructureState__Array__Class>(type_info, "", "VerletStructure+VerletStructureState[]");
        }
        inline app::VerletStructure_VerletStructureState__Array* create() {
            return il2cpp::create_object<app::VerletStructure_VerletStructureState__Array>(get_class());
        }
    } // namespace VerletStructure_VerletStructureState__Array
} // namespace app::classes::types
