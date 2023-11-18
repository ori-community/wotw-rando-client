#pragma once
#include <Modloader/app/structs/OnCollisionStay.h>
#include <Modloader/app/structs/OnCollisionStay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnCollisionStay {
        inline app::OnCollisionStay__Class** type_info() {
            static app::OnCollisionStay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnCollisionStay__Class**)(modloader::win::memory::resolve_rva(0x04786A28));
            }
            return cache;
        }
        inline app::OnCollisionStay__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionStay__Class>(type_info(), "fsm.triggers", "OnCollisionStay");
        }
        inline app::OnCollisionStay* create() {
            return il2cpp::create_object<app::OnCollisionStay>(get_class());
        }
    } // namespace OnCollisionStay
} // namespace app::classes::types
