#pragma once
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour_Samplers.h>
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour_Samplers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_SystemWithMonoBehaviour_Samplers {
        inline app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class** type_info() {
            static app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class>(type_info(), "", "VerletStructure+SystemWithMonoBehaviour", "Samplers");
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_Samplers* create() {
            return il2cpp::create_object<app::VerletStructure_SystemWithMonoBehaviour_Samplers>(get_class());
        }
    } // namespace VerletStructure_SystemWithMonoBehaviour_Samplers
} // namespace app::classes::types
