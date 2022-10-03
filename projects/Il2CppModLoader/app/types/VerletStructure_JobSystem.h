#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_JobSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletStructure_JobSystem__Class** type_info;
        inline app::VerletStructure_JobSystem__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_JobSystem__Class>(type_info, "", "VerletStructure", "JobSystem");
        }
        inline app::VerletStructure_JobSystem* create() {
            return il2cpp::create_object<app::VerletStructure_JobSystem>(get_class());
        }
    } // namespace VerletStructure_JobSystem
} // namespace app::classes::types
