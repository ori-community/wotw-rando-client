#pragma once
#include <Modloader/app/structs/OnCollisionExit.h>
#include <Modloader/app/structs/OnCollisionExit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnCollisionExit {
        inline app::OnCollisionExit__Class** type_info() {
            static app::OnCollisionExit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnCollisionExit__Class**)(modloader::win::memory::resolve_rva(0x04703138));
            }
            return cache;
        }
        inline app::OnCollisionExit__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionExit__Class>(type_info(), "fsm.triggers", "OnCollisionExit");
        }
        inline app::OnCollisionExit* create() {
            return il2cpp::create_object<app::OnCollisionExit>(get_class());
        }
    } // namespace OnCollisionExit
} // namespace app::classes::types
