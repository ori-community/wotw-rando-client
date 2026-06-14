#pragma once
#include <Modloader/app/structs/Grounding_Leg__Array.h>
#include <Modloader/app/structs/Grounding_Leg__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Grounding_Leg__Array {
        inline app::Grounding_Leg__Array__Class** type_info() {
            static app::Grounding_Leg__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Grounding_Leg__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E6D0));
            }
            return cache;
        }
        inline app::Grounding_Leg__Array__Class* get_class() {
            return il2cpp::get_class<app::Grounding_Leg__Array__Class>(type_info(), "RootMotion.FinalIK", "Grounding+Leg[]");
        }
        inline app::Grounding_Leg__Array* create() {
            return il2cpp::create_object<app::Grounding_Leg__Array>(get_class());
        }
    } // namespace Grounding_Leg__Array
} // namespace app::classes::types
