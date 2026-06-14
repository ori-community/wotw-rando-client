#pragma once
#include <Modloader/app/structs/TriggerColliderCallback_c.h>
#include <Modloader/app/structs/TriggerColliderCallback_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerColliderCallback_c {
        inline app::TriggerColliderCallback_c__Class** type_info() {
            static app::TriggerColliderCallback_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriggerColliderCallback_c__Class**)(modloader::win::memory::resolve_rva(0x0475A410));
            }
            return cache;
        }
        inline app::TriggerColliderCallback_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerColliderCallback_c__Class>(type_info(), "", "TriggerColliderCallback", "<>c");
        }
        inline app::TriggerColliderCallback_c* create() {
            return il2cpp::create_object<app::TriggerColliderCallback_c>(get_class());
        }
    } // namespace TriggerColliderCallback_c
} // namespace app::classes::types
