#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_SystemWithMonoBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletStructure_SystemWithMonoBehaviour_c__Class** type_info;
        inline app::VerletStructure_SystemWithMonoBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_SystemWithMonoBehaviour_c__Class>(type_info, "", "VerletStructure+SystemWithMonoBehaviour", "<>c");
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_c* create() {
            return il2cpp::create_object<app::VerletStructure_SystemWithMonoBehaviour_c>(get_class());
        }
    } // namespace VerletStructure_SystemWithMonoBehaviour_c
} // namespace app::classes::types
