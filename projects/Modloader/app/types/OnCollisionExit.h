#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnCollisionExit {
        inline app::OnCollisionExit__Class** type_info = (app::OnCollisionExit__Class**)(modloader::win::memory::resolve_rva(0x04703138));
        inline app::OnCollisionExit__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionExit__Class>(type_info, "fsm.triggers", "OnCollisionExit");
        }
        inline app::OnCollisionExit* create() {
            return il2cpp::create_object<app::OnCollisionExit>(get_class());
        }
    } // namespace OnCollisionExit
} // namespace app::classes::types
