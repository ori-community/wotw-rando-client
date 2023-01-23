#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererIdleBehaviour_c__Class.h>
#include <Modloader/app/structs/WandererIdleBehaviour_c.h>

namespace app::classes::types {
    namespace WandererIdleBehaviour_c {
        inline app::WandererIdleBehaviour_c__Class** type_info = (app::WandererIdleBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04767490));
        inline app::WandererIdleBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererIdleBehaviour_c__Class>(type_info, "", "WandererIdleBehaviour", "<>c");
        }
        inline app::WandererIdleBehaviour_c* create() {
            return il2cpp::create_object<app::WandererIdleBehaviour_c>(get_class());
        }
    } // namespace WandererIdleBehaviour_c
} // namespace app::classes::types
