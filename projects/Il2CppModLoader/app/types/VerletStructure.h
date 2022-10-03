#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletStructure__Class** type_info;
        inline app::VerletStructure__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure__Class>(type_info, "", "VerletStructure");
        }
        inline app::VerletStructure* create() {
            return il2cpp::create_object<app::VerletStructure>(get_class());
        }
        inline app::VerletStructure__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure__Array>(get_class(), size);
        }
    } // namespace VerletStructure
} // namespace app::classes::types
