#pragma once
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour_c.h>
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_SystemWithMonoBehaviour_c {
        inline app::VerletStructure_SystemWithMonoBehaviour_c__Class** type_info() {
            static app::VerletStructure_SystemWithMonoBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletStructure_SystemWithMonoBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0470A060));
            }
            return cache;
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_SystemWithMonoBehaviour_c__Class>(type_info(), "", "VerletStructure+SystemWithMonoBehaviour", "<>c");
        }
        inline app::VerletStructure_SystemWithMonoBehaviour_c* create() {
            return il2cpp::create_object<app::VerletStructure_SystemWithMonoBehaviour_c>(get_class());
        }
    } // namespace VerletStructure_SystemWithMonoBehaviour_c
} // namespace app::classes::types
