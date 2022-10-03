#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_SystemWithMonoBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletStructure_SystemWithMonoBehaviour__Class** type_info;
        inline app::VerletStructure_SystemWithMonoBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_SystemWithMonoBehaviour__Class>(type_info, "", "VerletStructure", "SystemWithMonoBehaviour");
        }
        inline app::VerletStructure_SystemWithMonoBehaviour* create() {
            return il2cpp::create_object<app::VerletStructure_SystemWithMonoBehaviour>(get_class());
        }
    } // namespace VerletStructure_SystemWithMonoBehaviour
} // namespace app::classes::types
