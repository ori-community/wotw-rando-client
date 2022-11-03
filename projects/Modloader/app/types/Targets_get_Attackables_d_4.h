#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Targets_get_Attackables_d_4 {
        inline app::Targets_get_Attackables_d_4__Class** type_info = (app::Targets_get_Attackables_d_4__Class**)(modloader::win::memory::resolve_rva(0x04794978));
        inline app::Targets_get_Attackables_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::Targets_get_Attackables_d_4__Class>(type_info, "Game", "Targets", "<get_Attackables>d__4");
        }
        inline app::Targets_get_Attackables_d_4* create() {
            return il2cpp::create_object<app::Targets_get_Attackables_d_4>(get_class());
        }
    } // namespace Targets_get_Attackables_d_4
} // namespace app::classes::types
