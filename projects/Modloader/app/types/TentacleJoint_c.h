#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleJoint_c {
        inline app::TentacleJoint_c__Class** type_info = (app::TentacleJoint_c__Class**)(modloader::win::memory::resolve_rva(0x0472E720));
        inline app::TentacleJoint_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleJoint_c__Class>(type_info, "", "TentacleJoint", "<>c");
        }
        inline app::TentacleJoint_c* create() {
            return il2cpp::create_object<app::TentacleJoint_c>(get_class());
        }
    } // namespace TentacleJoint_c
} // namespace app::classes::types
