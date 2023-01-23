#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TriggerColliderCallback_c__Class.h>
#include <Modloader/app/structs/TriggerColliderCallback_c.h>

namespace app::classes::types {
    namespace TriggerColliderCallback_c {
        inline app::TriggerColliderCallback_c__Class** type_info = (app::TriggerColliderCallback_c__Class**)(modloader::win::memory::resolve_rva(0x0475A410));
        inline app::TriggerColliderCallback_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerColliderCallback_c__Class>(type_info, "", "TriggerColliderCallback", "<>c");
        }
        inline app::TriggerColliderCallback_c* create() {
            return il2cpp::create_object<app::TriggerColliderCallback_c>(get_class());
        }
    } // namespace TriggerColliderCallback_c
} // namespace app::classes::types
