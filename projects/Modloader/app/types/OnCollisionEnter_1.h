#pragma once
#include <Modloader/app/structs/OnCollisionEnter_1.h>
#include <Modloader/app/structs/OnCollisionEnter_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnCollisionEnter_1 {
        inline app::OnCollisionEnter_1__Class** type_info() {
            static app::OnCollisionEnter_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnCollisionEnter_1__Class**)(modloader::win::memory::resolve_rva(0x04799050));
            }
            return cache;
        }
        inline app::OnCollisionEnter_1__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionEnter_1__Class>(type_info(), "UberBehaviourTree.Events", "OnCollisionEnter");
        }
        inline app::OnCollisionEnter_1* create() {
            return il2cpp::create_object<app::OnCollisionEnter_1>(get_class());
        }
    } // namespace OnCollisionEnter_1
} // namespace app::classes::types
