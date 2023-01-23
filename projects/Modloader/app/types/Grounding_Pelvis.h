#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Grounding_Pelvis__Class.h>
#include <Modloader/app/structs/Grounding_Pelvis.h>

namespace app::classes::types {
    namespace Grounding_Pelvis {
        inline app::Grounding_Pelvis__Class** type_info = (app::Grounding_Pelvis__Class**)(modloader::win::memory::resolve_rva(0x0472E0C8));
        inline app::Grounding_Pelvis__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounding_Pelvis__Class>(type_info, "RootMotion.FinalIK", "Grounding", "Pelvis");
        }
        inline app::Grounding_Pelvis* create() {
            return il2cpp::create_object<app::Grounding_Pelvis>(get_class());
        }
    } // namespace Grounding_Pelvis
} // namespace app::classes::types
