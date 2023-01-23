#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnReceiveDamage_1__Class.h>
#include <Modloader/app/structs/OnReceiveDamage_1.h>

namespace app::classes::types {
    namespace OnReceiveDamage_1 {
        inline app::OnReceiveDamage_1__Class** type_info = (app::OnReceiveDamage_1__Class**)(modloader::win::memory::resolve_rva(0x04700DC8));
        inline app::OnReceiveDamage_1__Class* get_class() {
            return il2cpp::get_class<app::OnReceiveDamage_1__Class>(type_info, "UberBehaviourTree.Events", "OnReceiveDamage");
        }
        inline app::OnReceiveDamage_1* create() {
            return il2cpp::create_object<app::OnReceiveDamage_1>(get_class());
        }
    } // namespace OnReceiveDamage_1
} // namespace app::classes::types
