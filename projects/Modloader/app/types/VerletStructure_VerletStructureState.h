#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState__Class.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState__Array.h>

namespace app::classes::types {
    namespace VerletStructure_VerletStructureState {
        inline app::VerletStructure_VerletStructureState__Class** type_info = (app::VerletStructure_VerletStructureState__Class**)(modloader::win::memory::resolve_rva(0x0470A5C8));
        inline app::VerletStructure_VerletStructureState__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_VerletStructureState__Class>(type_info, "", "VerletStructure", "VerletStructureState");
        }
        inline app::VerletStructure_VerletStructureState* create() {
            return il2cpp::create_object<app::VerletStructure_VerletStructureState>(get_class());
        }
        inline app::VerletStructure_VerletStructureState__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure_VerletStructureState__Array>(get_class(), size);
        }
        inline app::VerletStructure_VerletStructureState__Array* create_array(const std::vector<app::VerletStructure_VerletStructureState*>& items) {
            return il2cpp::array_new<app::VerletStructure_VerletStructureState__Array>(get_class(), items);
        }
    } // namespace VerletStructure_VerletStructureState
} // namespace app::classes::types
