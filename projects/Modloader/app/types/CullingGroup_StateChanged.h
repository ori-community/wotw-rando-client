#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CullingGroup_StateChanged {
        inline app::CullingGroup_StateChanged__Class** type_info = (app::CullingGroup_StateChanged__Class**)(modloader::win::memory::resolve_rva(0x0476EF38));
        inline app::CullingGroup_StateChanged__Class* get_class() {
            return il2cpp::get_nested_class<app::CullingGroup_StateChanged__Class>(type_info, "UnityEngine", "CullingGroup", "StateChanged");
        }
        inline app::CullingGroup_StateChanged* create() {
            return il2cpp::create_object<app::CullingGroup_StateChanged>(get_class());
        }
    } // namespace CullingGroup_StateChanged
} // namespace app::classes::types
