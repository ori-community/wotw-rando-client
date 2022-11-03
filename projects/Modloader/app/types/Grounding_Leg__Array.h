#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Grounding_Leg__Array {
        inline app::Grounding_Leg__Array__Class** type_info = (app::Grounding_Leg__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E6D0));
        inline app::Grounding_Leg__Array__Class* get_class() {
            return il2cpp::get_class<app::Grounding_Leg__Array__Class>(type_info, "RootMotion.FinalIK", "Grounding+Leg[]");
        }
        inline app::Grounding_Leg__Array* create() {
            return il2cpp::create_object<app::Grounding_Leg__Array>(get_class());
        }
    } // namespace Grounding_Leg__Array
} // namespace app::classes::types
