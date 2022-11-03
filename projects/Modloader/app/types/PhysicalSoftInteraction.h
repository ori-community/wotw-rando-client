#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalSoftInteraction {
        inline app::PhysicalSoftInteraction__Class** type_info = (app::PhysicalSoftInteraction__Class**)(modloader::win::memory::resolve_rva(0x047736E0));
        inline app::PhysicalSoftInteraction__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSoftInteraction__Class>(type_info, "", "PhysicalSoftInteraction");
        }
        inline app::PhysicalSoftInteraction* create() {
            return il2cpp::create_object<app::PhysicalSoftInteraction>(get_class());
        }
    } // namespace PhysicalSoftInteraction
} // namespace app::classes::types
