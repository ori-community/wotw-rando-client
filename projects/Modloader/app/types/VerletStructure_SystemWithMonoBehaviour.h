#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour__Class.h>
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour.h>

namespace app::classes::types {
    namespace VerletStructure_SystemWithMonoBehaviour {
        inline app::VerletStructure_SystemWithMonoBehaviour__Class** type_info = (app::VerletStructure_SystemWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0476E6E8));
        inline app::VerletStructure_SystemWithMonoBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_SystemWithMonoBehaviour__Class>(type_info, "", "VerletStructure", "SystemWithMonoBehaviour");
        }
        inline app::VerletStructure_SystemWithMonoBehaviour* create() {
            return il2cpp::create_object<app::VerletStructure_SystemWithMonoBehaviour>(get_class());
        }
    } // namespace VerletStructure_SystemWithMonoBehaviour
} // namespace app::classes::types
