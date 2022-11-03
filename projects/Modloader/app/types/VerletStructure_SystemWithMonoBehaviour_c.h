#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_SystemWithMonoBehaviour_c {
        inline app::VerletStructure_SystemWithMonoBehaviour_c__Class** type_info = (app::VerletStructure_SystemWithMonoBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0470A060));
        inline app::VerletStructure_SystemWithMonoBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_SystemWithMonoBehaviour_c__Class>(type_info, "", "VerletStructure+SystemWithMonoBehaviour", "<>c");
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_c* create() {
            return il2cpp::create_object<app::VerletStructure_SystemWithMonoBehaviour_c>(get_class());
        }
    } // namespace VerletStructure_SystemWithMonoBehaviour_c
} // namespace app::classes::types
