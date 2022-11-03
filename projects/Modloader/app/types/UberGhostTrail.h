#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGhostTrail {
        inline app::UberGhostTrail__Class** type_info = (app::UberGhostTrail__Class**)(modloader::win::memory::resolve_rva(0x047763C8));
        inline app::UberGhostTrail__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrail__Class>(type_info, "", "UberGhostTrail");
        }
        inline app::UberGhostTrail* create() {
            return il2cpp::create_object<app::UberGhostTrail>(get_class());
        }
    } // namespace UberGhostTrail
} // namespace app::classes::types
