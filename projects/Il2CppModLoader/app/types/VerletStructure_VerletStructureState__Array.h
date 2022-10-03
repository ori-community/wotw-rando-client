#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_VerletStructureState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletStructure_VerletStructureState__Array__Class** type_info;
        inline app::VerletStructure_VerletStructureState__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure_VerletStructureState__Array__Class>(type_info, "", "VerletStructure+VerletStructureState[]");
        }
        inline app::VerletStructure_VerletStructureState__Array* create() {
            return il2cpp::create_object<app::VerletStructure_VerletStructureState__Array>(get_class());
        }
    } // namespace VerletStructure_VerletStructureState__Array
} // namespace app::classes::types
