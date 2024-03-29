#pragma once
#include <Modloader/app/structs/TentacleJoint_c.h>
#include <Modloader/app/structs/TentacleJoint_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleJoint_c {
        inline app::TentacleJoint_c__Class** type_info() {
            static app::TentacleJoint_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleJoint_c__Class**)(modloader::win::memory::resolve_rva(0x0472E720));
            }
            return cache;
        }
        inline app::TentacleJoint_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleJoint_c__Class>(type_info(), "", "TentacleJoint", "<>c");
        }
        inline app::TentacleJoint_c* create() {
            return il2cpp::create_object<app::TentacleJoint_c>(get_class());
        }
    } // namespace TentacleJoint_c
} // namespace app::classes::types
