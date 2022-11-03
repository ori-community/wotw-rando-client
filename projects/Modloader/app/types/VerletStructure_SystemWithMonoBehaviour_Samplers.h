#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_SystemWithMonoBehaviour_Samplers {
        namespace {
            inline app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class** type_info = &type_info_ref;
        inline app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_SystemWithMonoBehaviour_Samplers__Class>(type_info, "", "VerletStructure+SystemWithMonoBehaviour", "Samplers");
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_Samplers* create() {
            return il2cpp::create_object<app::VerletStructure_SystemWithMonoBehaviour_Samplers>(get_class());
        }
    } // namespace VerletStructure_SystemWithMonoBehaviour_Samplers
} // namespace app::classes::types
