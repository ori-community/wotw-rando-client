#pragma once
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour_c.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotionIdleBehaviour_c {
        inline app::SkeetoLocomotionIdleBehaviour_c__Class** type_info() {
            static app::SkeetoLocomotionIdleBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoLocomotionIdleBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0476E028));
            }
            return cache;
        }
        inline app::SkeetoLocomotionIdleBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoLocomotionIdleBehaviour_c__Class>(type_info(), "", "SkeetoLocomotionIdleBehaviour", "<>c");
        }
        inline app::SkeetoLocomotionIdleBehaviour_c* create() {
            return il2cpp::create_object<app::SkeetoLocomotionIdleBehaviour_c>(get_class());
        }
    } // namespace SkeetoLocomotionIdleBehaviour_c
} // namespace app::classes::types
