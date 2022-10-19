#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoLocomotionIdleBehaviour_c {
        inline app::SkeetoLocomotionIdleBehaviour_c__Class** type_info = (app::SkeetoLocomotionIdleBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0476E028));
        inline app::SkeetoLocomotionIdleBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoLocomotionIdleBehaviour_c__Class>(type_info, "", "SkeetoLocomotionIdleBehaviour", "<>c");
        }
        inline app::SkeetoLocomotionIdleBehaviour_c* create() {
            return il2cpp::create_object<app::SkeetoLocomotionIdleBehaviour_c>(get_class());
        }
    } // namespace SkeetoLocomotionIdleBehaviour_c
} // namespace app::classes::types
