#pragma once
#include <Modloader/app/structs/OnCollisionEnter.h>
#include <Modloader/app/structs/OnCollisionEnter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnCollisionEnter {
        inline app::OnCollisionEnter__Class** type_info() {
            static app::OnCollisionEnter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnCollisionEnter__Class**)(modloader::win::memory::resolve_rva(0x04786E30));
            }
            return cache;
        }
        inline app::OnCollisionEnter__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionEnter__Class>(type_info(), "fsm.triggers", "OnCollisionEnter");
        }
        inline app::OnCollisionEnter* create() {
            return il2cpp::create_object<app::OnCollisionEnter>(get_class());
        }
    } // namespace OnCollisionEnter
} // namespace app::classes::types
