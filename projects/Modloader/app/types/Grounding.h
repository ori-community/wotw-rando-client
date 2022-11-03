#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Grounding {
        inline app::Grounding__Class** type_info = (app::Grounding__Class**)(modloader::win::memory::resolve_rva(0x04713220));
        inline app::Grounding__Class* get_class() {
            return il2cpp::get_class<app::Grounding__Class>(type_info, "RootMotion.FinalIK", "Grounding");
        }
        inline app::Grounding* create() {
            return il2cpp::create_object<app::Grounding>(get_class());
        }
    } // namespace Grounding
} // namespace app::classes::types
