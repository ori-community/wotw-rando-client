#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_VerletLink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletStructure_VerletLink__Class** type_info;
        inline app::VerletStructure_VerletLink__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_VerletLink__Class>(type_info, "", "VerletStructure", "VerletLink");
        }
        inline app::VerletStructure_VerletLink* create() {
            return il2cpp::create_object<app::VerletStructure_VerletLink>(get_class());
        }
        inline app::VerletStructure_VerletLink__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure_VerletLink__Array>(get_class(), size);
        }
    } // namespace VerletStructure_VerletLink
} // namespace app::classes::types
