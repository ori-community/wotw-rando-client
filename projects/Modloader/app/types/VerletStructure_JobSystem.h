#pragma once
#include <Modloader/app/structs/VerletStructure_JobSystem.h>
#include <Modloader/app/structs/VerletStructure_JobSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_JobSystem {
        inline app::VerletStructure_JobSystem__Class** type_info() {
            static app::VerletStructure_JobSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletStructure_JobSystem__Class**)(modloader::win::memory::resolve_rva(0x0473E198));
            }
            return cache;
        }
        inline app::VerletStructure_JobSystem__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_JobSystem__Class>(type_info(), "", "VerletStructure", "JobSystem");
        }
        inline app::VerletStructure_JobSystem* create() {
            return il2cpp::create_object<app::VerletStructure_JobSystem>(get_class());
        }
    } // namespace VerletStructure_JobSystem
} // namespace app::classes::types
