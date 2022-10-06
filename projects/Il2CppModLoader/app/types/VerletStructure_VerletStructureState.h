#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_VerletStructureState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletStructure_VerletStructureState__Class** type_info;
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
